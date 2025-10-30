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

Node *insertAtKth(Node *head, int data, int k)
{
  if (head == nullptr)
  {
    return new Node(data);
  }
  if (k == 1)
  {
    Node *newNode = new Node(data);
    newNode->next = head;
    return newNode;
  }
  Node * temp = head;
  int count = 0;
  while(temp != nullptr){
    count++;
    if ( count == k-1){
     Node *store = temp ->next;
     Node * newNode = new Node(data);
     temp -> next = newNode;
     newNode -> next = store;
     break;
    }
    temp = temp -> next;
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
  int data;
  cout << "Enter the data to be inserted at head: ";
  cin >> data;
  Node *head = convertArrayToLinkedList(arr);
  cout << "Linked List created from array is: ";
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
  int k ;
  cout << "Enter the position to insert the new node: ";
  cin >> k;
  head = insertAtKth(head, data , k);
  cout << "Linked List after insertion at head is: ";
  Node *temp2 = head;
  while (temp2 != nullptr)
  {
    cout << temp2->data << " ";
    temp2 = temp2->next;
  }
  return 0;
}