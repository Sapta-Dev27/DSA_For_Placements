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

bool searchInLinkedList(Node *head , int key){
  Node *temp = head;
  while(temp != nullptr){
    if(temp -> data == key){
      return true;
    }
    else{
      temp = temp -> next;
    }
  }
  return false;
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
    cout << temp->data << " " <<endl;
    temp = temp->next;
  }
  int key;
  cout << "Enter the element to be searched: ";
  cin >> key;
  if(searchInLinkedList(head , key)){
    cout << "Element found in the linked list" << endl;
  }
  else{
    cout << "Element not found in the linked list" << endl;
  }
  return 0;
}