#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node(int data1)
  {
    data = data1;
    next = NULL;
  }
  Node(int data1, Node *next1)
  {
    data = data1;
    next = next1;
  }
};

Node *convertToLL(vector<int> arr)
{
  Node *head = new Node(arr[0]);
  Node *mover = head;
  for (int i = 1; i < arr.size(); i++)
  {
    Node *temp = new Node(arr[i]);
    mover->next = temp;
    mover = mover->next;
  }
  return head;
}

void traverseLL(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

int returnNthFromEnd(Node *head , int n){
  if(head == NULL ) {
    return -1;
  }
  if(head -> next == NULL ) {
    return head -> data;
  }
  Node *temp = head;
  int count = 0;
  while(temp != NULL ) {
    count++;
    temp = temp -> next;
  }
  int k1 = (count-n+1);
  count =0;
  temp = head;
  while(temp != NULL) {
    count ++;
    if(count == k1) {
      return temp -> data;
    }
    temp = temp -> next;
  }
}

int main()
{
  int n;
  cout << "Enter the no of elements in the array: ";
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  Node *head = convertToLL(arr);
  cout << "The linked list elements are: ";
  traverseLL(head);
  int n1 ;
  cout << "Enter the value of n: ";
  cin >> n1;
  int data = returnNthFromEnd(head, n1);
  cout << "The "<< n1 <<"th node from the end is: " << data << endl;
  return 0;
}