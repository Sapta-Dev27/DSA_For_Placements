#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;
  Node(int data1, Node *next1, Node *prev1)
  {
    data = data1;
    next = next1;
    prev = prev1;
  };
  Node(int data1)
  {
    data = data1;
    next = nullptr;
    prev = nullptr;
  }
};

Node *convertArrToDLL(vector<int> arr)
{
  Node *head = new Node(arr[0]);
  Node *temp = head;
  for (int i = 1; i < arr.size(); i++)
  {
    Node *newNode = new Node(arr[i]);
    temp->next = newNode;
    newNode->prev = temp;
    temp = newNode;
  }
  return head;
}

Node *deleteKthElementDLL( Node * head , int k ) {
  if( head == nullptr){
    return nullptr;
  }
  if( head -> next == nullptr){
    free(head);
    return nullptr;
  }
  if ( k == 1) {
    Node *temp = head;
    head = head -> next ;
    head -> prev = nullptr;
    temp -> next = nullptr;
    free( temp );
    return head;
  }
  int length = 0;
  Node * curr = head;
  while( curr != nullptr){
    length++;
    curr = curr -> next;
  }
  if( length == k) {
    Node *temp = head;
    while(temp -> next -> next != nullptr){
      temp = temp -> next;
    }
    temp -> next -> prev = nullptr;
    free( temp -> next );
    temp -> next = nullptr;
    return head;
  }
  Node *track = nullptr;
  Node *temp = head;
  int count = 0;
  while(temp != nullptr){
    count++;
    if( count == k){
      temp -> prev -> next = temp -> next;
      temp -> next -> prev = track;
      temp -> next = nullptr;
      temp -> prev = nullptr;
      free(temp);
      break;
    }
    track = temp;
    temp = temp -> next;
  }
  return head;
}

int main()
{
  int n;
  cout << "Enter number of elements in Doubly Linked List: ";
  cin >> n;
  vector<int> arr(n);
  cout << "Enter elements of Doubly Linked List: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  Node *head = convertArrToDLL(arr);
  cout << "Doubly Linked List created from array: ";
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
  int k ;
  cout << "Enter the position of element to be deleted: ";
  cin >> k;
  head = deleteKthElementDLL(head, k);
  cout << "Doubly Linked List after deleting kth element: ";
  temp = head;  
  while (temp != nullptr)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  return 0;
}