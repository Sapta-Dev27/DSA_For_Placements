#include <bits/stdc++.h>
using namespace std;

struct Node
{
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


Node *convertArrayToLinkedList(vector<int>&arr){
  Node *head = new Node(arr[0]);
  Node *mover = head ;
  for(int i = 1 ; i < arr.size(); i++){
    Node *temp = new Node(arr[i]);
    mover -> next = temp;
    mover = temp;
  }
  return head;
}


void LinkedListTraversal(Node *head){
  Node *temp = head;
  while(temp != nullptr){
    cout <<temp->data<< " ";
    temp=temp->next;
  }
}



Node *reverseLL(Node *head) {
  if(head==NULL){
    return NULL;
  }
  if(head -> next == NULL){
    return head;
  }
  Node *prev = NULL;
  Node *temp = head;
  Node *front ;
  while(temp != NULL){
    front = temp -> next;
    temp -> next = prev;
    prev = temp;
    temp = front;
  }
  return prev;
}



int main()
{
  int n;
  cout << "Enter number of elements in the array : ";
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  Node *head = convertArrayToLinkedList(arr);
  cout << "Linked List elements are : ";
  LinkedListTraversal(head);
  cout << endl;
  head = reverseLL(head);
  cout << "Reversed Linked List elements are : ";
  LinkedListTraversal(head);
  cout << endl;
  return 0;

}