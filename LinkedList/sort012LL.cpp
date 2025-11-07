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

Node *sort012LL(Node *head){
  if(head==nullptr){
    return head;
  }
  if(head -> next == nullptr){
    return head;
  }
  Node *zeroHead = new Node(-1);
  Node *oneHead = new Node(-1);
  Node *twoHead = new Node(-1);
  Node *zero = zeroHead;
  Node *one = oneHead;
  Node *two = twoHead;
  Node *temp = head;
  while(temp != nullptr){
     if(temp -> data == 0){
      zero -> next = temp;
      zero = zero -> next;
     }
     else if(temp -> data == 1){
      one -> next = temp;
      one = one -> next;
     }
     else {
      two -> next = temp;
      two= two-> next;
     }
      temp = temp -> next;
  }
  zero -> next = ( oneHead -> next) ? (oneHead->next) : (twoHead -> next);
  one -> next = twoHead -> next;
  two -> next = nullptr;
  Node * newNode = zeroHead -> next;
  delete oneHead;
  delete twoHead;
  delete zeroHead;
  return newNode;
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
  head = sort012LL(head);
  cout << "Linked List after sorting is: ";
  temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  return 0;
}