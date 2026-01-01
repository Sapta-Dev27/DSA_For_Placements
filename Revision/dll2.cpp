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
  }
  Node(int data1)
  {
    data = data1;
    next = NULL;
    prev = NULL;
  }
};

Node *convertarr2DLL(vector<int> arr)
{
  Node *head = new Node(arr[0]);
  Node *mover = head;
  for (int i = 1; i < arr.size(); i++)
  {
    Node *temp = new Node(arr[i]);
    mover->next = temp;
    temp->prev = mover;
    mover = mover->next;
  }
  return head;
}

void traverseDLL(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

Node *insertAtStart(int data, Node *head)
{
  if (head == NULL)
  {
    return new Node(data);
  }
  Node *newNode = new Node(data);
  newNode->next = head;
  head->prev = newNode;
  return newNode;
}

Node *insertAtEnd(int data, Node *head)
{
  if (head == NULL)
  {
    return new Node(data);
  }
  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  Node *newNode = new Node(data);
  temp->next = newNode;
  newNode->prev = temp;
  return head;
}

Node *insertAtKthPos(int data, int k, Node *head)
{
  if (head == NULL)
  {
    return new Node(data);
  }
  if (k == 1)
  {
    Node *newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    return newNode;
  }
  int length = 0;
  Node *curr = head;
  while (curr != NULL)
  {
    length++;
    curr = curr->next;
  }
  if (length + 1 == k)
  {
    Node *temp = head;
    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    Node *newNode = new Node(data);
    temp->next = newNode;
    newNode->prev = temp;
    return head;
  }
  Node *temp = head;
  int count = 0;
  while (temp != NULL)
  {
    count++;
    if (count == k - 1)
    {
      Node *newNode = new Node(data);
      newNode->next = temp->next;
      temp->next->prev = newNode;

      newNode->prev = temp;
      temp->next = newNode;
      break;
    }
    temp = temp->next;
  }
  return head;
}

Node *insertBeforeValue(int data, int value, Node *head)
{
  if (head == NULL)
  {
    return new Node(data);
  }
  if (head->data == value)
  {
    Node *newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    return newNode;
  }
  Node *temp = head;
  while (temp != NULL)
  {
    if (temp->next->data == value)
    {
      Node *newNode = new Node(data);
      newNode->next = temp->next;
      temp->next->prev = newNode;
      newNode->prev = temp;
      temp->next = newNode;
      break;
    }
    temp = temp->next;
  }
  return head;
}

int main()
{
  int n;
  cout << "Enter number of elements in the array: ";
  cin >> n;
  vector<int> arr(n);
  cout << "Enter elements of the array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  Node *head = convertarr2DLL(arr);
  cout << "Doubly Linked List elements are: ";
  traverseDLL(head);
  int data1;
  cout << "\nEnter data to insert at start: ";
  cin >> data1;
  head = insertAtStart(data1, head);
  cout << "Doubly Linked List after insertion at start: ";
  traverseDLL(head);
  int data2;
  cout << "\nEnter data to insert at end: ";
  cin >> data2;
  head = insertAtEnd(data2, head);
  cout << "Doubly Linked List after insertion at end: ";
  traverseDLL(head);
  int data3, k;
  cout << "\nEnter data to insert at kth position: ";
  cin >> data3;
  cout << "Enter position k: ";
  cin >> k;
  head = insertAtKthPos(data3, k, head);
  cout << "Doubly Linked List after insertion at kth position: ";
  traverseDLL(head);
  int data4, value;
  cout << "\nEnter data to insert before a value: ";  
  cin >> data4;
  cout << "Enter the value before which to insert: ";
  cin >> value;
  head = insertBeforeValue(data4, value, head); 
  cout << "Doubly Linked List after insertion before given value: ";
  traverseDLL(head);
  return 0;
}