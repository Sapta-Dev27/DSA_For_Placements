#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node(int data1, Node *next1)
  {
    data = data1;
    next = next1;
  }
  Node(int data1)
  {
    data = data1;
    next = nullptr;
  }
};

Node *convertArrayToLinkedList(vector<int> &arr)
{
  Node *head = new Node(arr[0]);
  Node *mover = head;
  for (int i = 1; i < arr.size(); i++)
  {
    Node *temp = new Node(arr[i]);
    mover->next = temp;
    mover = temp;
  }
  return head;
}


Node *oddEvenLL(Node *head){
  if(head==nullptr){
    return head;
  }
  if(head -> next == nullptr){
    return head;
  }
  Node *odd = head;
  Node *even = head -> next;
  vector<int>arr;
  while(odd != nullptr && odd -> next != nullptr){
    arr.push_back(odd->data);
    odd=odd->next->next;
  }
  if(odd){
    arr.push_back(odd->data);
  }
  while(even != nullptr && even -> next != nullptr){
    arr.push_back(even->data);
    even=even->next->next;
  }
  if(even){
    arr.push_back(even->data);
  }
  int i = 0;
  Node *temp = head;
  while(temp!=nullptr){
    temp->data=arr[i];
    i++;
    temp=temp->next;
  }
  return head;
}

int main()
{
  int n;
  cout << "Enter the size of array: ";
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the elements of array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  Node *head = convertArrayToLinkedList(arr);
  cout << "Linked List created from array is: ";
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
  head = oddEvenLL(head);
  cout << "Linked List after odd-even arrangement is: ";
  temp = head;  
  while (temp != nullptr)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  return 0;
}