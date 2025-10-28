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

int countNodes(Node *head){
  Node *temp = head;
  int count = 0;
  while(temp!=nullptr){
    count++;
    temp=temp->next;
  }
  return count;
}


bool searchElement(Node *head , int value){
  Node *temp = head;
  while(temp != nullptr){
    if(temp->data == value){
      return true;
    }
    else {
      temp=temp->next;
    }
  }
  return false;
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
  cout << "Number of nodes in the linked list are : " << countNodes(head) << endl;
  int value;
  cout << "Enter the element to be searched : ";
  cin >> value;
  if(searchElement(head , value)){
    cout << "Element found in the linked list" << endl;
  }
  else {
    cout << "Element not found in the linked list" << endl;
  }
  return 0;

}