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
    next = NULL;
  }
};

Node *convertarrLL(vector<int> arr)
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

Node *insertAtStart(int data, Node *head)
{
  if (head == NULL)
  {
    return new Node(data);
  }
  Node *temp = head;
  Node *newNode = new Node(data);
  newNode->next = temp;
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
    return newNode;
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
      temp->next = newNode;
      break;
    }
    temp = temp->next;
  }
  return head;
}

Node *insertAfterValue(int data, int value, Node *head)
{
  if (head == NULL)
  {
    return new Node(data);
  }
  Node *temp = head;
  while (temp != NULL)
  {
    if (temp->data == value)
    {
      Node *newNode = new Node(data);
      newNode->next = temp->next;
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
  cout << "Enter number of Elements in the array: ";
  cin >> n;
  cout << "Enter Elements of the array: ";
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  Node *head = convertarrLL(arr);
  cout << "Linked List Elements are: ";
  traverseLL(head);
  int data1;
  cout << "\nEnter data to be inserted at start: ";
  cin >> data1;
  head = insertAtStart(data1, head);
  cout << "Linked List after insertion at start: ";
  traverseLL(head);
  int data2;
  cout << "\nEnter data to be inserted at end: ";
  cin >> data2;
  head = insertAtEnd(data2, head);
  cout << "Linked List after insertion at end: ";
  traverseLL(head);
  int data3, k;
  cout << "\nEnter data to be inserted at kth position: ";
  cin >> data3;
  cout << "Enter position k: ";
  cin >> k;
  head = insertAtKthPos(data3, k, head);
  cout << "Linked List after insertion at kth position: ";
  traverseLL(head);
  int data4, value;
  cout << "\nEnter data to be inserted after a value: ";
  cin >> data4;
  cout << "Enter the value after which to insert: ";
  cin >> value;
  head = insertAfterValue(data4, value, head);
  cout << "Linked List after insertion after a value: ";
  traverseLL(head);
  return 0;
}