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

Node *deleteFromStart(Node *head)
{
  if (head == NULL)
  {
    return NULL;
  }
  if (head->next == NULL)
  {
    return NULL;
  }
  Node *temp = head;
  head = head->next;
  head->prev = NULL;
  temp->next = NULL;
  free(temp);
  return head;
}

Node *deleteFromEnd(Node *head)
{
  if (head == NULL)
  {
    return NULL;
  }
  if (head->next == NULL)
  {
    return NULL;
  }
  Node *temp = head;
  while (temp->next->next != NULL)
  {
    temp = temp->next;
  }
  temp->next->prev = NULL;
  free(temp->next);
  temp->next = NULL;
  return head;
}

Node *deleteFromKthPos(int k, Node *head)
{
  if (head == NULL)
  {
    return NULL;
  }
  if (head->next == NULL)
  {
    return NULL;
  }
  Node *curr = head;
  int length = 0;
  while (curr != NULL)
  {
    length++;
    curr = curr->next;
  }
  if (length == k)
  {
    Node *temp = head;
    while (temp->next->next != NULL)
    {
      temp = temp->next;
    }
    temp->next->prev = NULL;
    free(temp->next);
    temp->next = NULL;
    return head;
  }
  Node *temp = head;
  int count = 0;
  while (temp != NULL)
  {
    count++;
    if (count == k)
    {
      temp->prev->next = temp->next;
      temp->next->prev = temp->prev;
      temp->next = NULL;
      temp->prev = NULL;
      free(temp);
      break;
    }
    temp = temp->next;
  }
  return head;
}

Node *deleteValue(int value, Node *head)
{
  if (head == NULL)
  {
    return NULL;
  }
  if (head->next == NULL)
  {
    return NULL;
  }
  Node *temp = head;
  while (temp != NULL)
  {
    if (temp->data == value && temp->next != NULL)
    {
      temp->prev->next = temp->next;
      temp->next->prev = temp->prev;
      temp->next = NULL;
      temp->prev = NULL;
      free(temp);
      break;
    }
    else if (temp->data == value && temp->next == NULL)
    {
      Node *toDelete = temp;
      temp->prev->next = NULL;
      toDelete->prev = NULL;
      free(toDelete);
      break;
    }
    else
    {
      temp = temp->next;
    }
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
  head = deleteFromStart(head);
  cout << "\nDoubly Linked List after deletion from start: ";
  traverseDLL(head);
  head = deleteFromEnd(head);
  cout << "\nDoubly Linked List after deletion from end: ";
  traverseDLL(head);
  int k;
  cout << "\nEnter position to delete node from kth position: ";
  cin >> k;
  head = deleteFromKthPos(k, head);
  cout << "Doubly Linked List after deletion from kth position: ";
  traverseDLL(head);
  int value;
  cout << "\nEnter value to delete node with given value: ";
  cin >> value;
  head = deleteValue(value, head);
  cout << "Doubly Linked List after deletion of given value: ";
  traverseDLL(head);
  return 0;
}