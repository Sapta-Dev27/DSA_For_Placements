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

Node *deleteNodeFromStart(Node *head)
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
  free(temp);
  return head;
}

Node *deleteNodeFromEnd(Node *head)
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
  free(temp->next);
  temp->next = NULL;
  return head;
}

Node *deleteNodeFromKthPos(int k, Node *head)
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
  int count = 0;
  while (temp != NULL)
  {
    count++;
    if (count == k - 1)
    {
      Node *toDelete = temp->next;
      temp->next = temp->next->next;
      free(toDelete);
      break;
    }
    temp = temp->next;
  }
  return head;
}

Node *deleteNodeValue(int value, Node *head)
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
  Node *prev = NULL;
  while (temp != NULL)
  {
    if (temp->data == value)
    {
      prev->next = temp->next;
      free(temp);
      break;
    }
    prev = temp;
    temp = temp->next;
  }
  return head;
}

Node *deleteNodeAfterValue(int value, Node *head)
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
    if (temp->data == value)
    {
      Node *toDelete = temp->next;
      temp->next = temp->next->next;
      free(toDelete);
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
  head = deleteNodeFromStart(head);
  cout << "\nLinked List after deletion from start: ";
  traverseLL(head);
  head = deleteNodeFromEnd(head);
  cout << "\nLinked List after deletion from end: ";
  traverseLL(head);
  int k;
  cout << "\nEnter position to delete node from kth position: ";
  cin >> k;
  head = deleteNodeFromKthPos(k, head);
  cout << "Linked List after deletion from kth position: ";
  traverseLL(head);
  int value;
  cout << "\nEnter value to delete node with given value: ";
  cin >> value;
  head = deleteNodeValue(value, head);
  cout << "Linked List after deletion of given value: ";
  traverseLL(head);
  int value2;
  cout << "\nEnter value to delete node after given value: ";
  cin >> value2;
  head = deleteNodeAfterValue(value2, head);
  cout << "Linked List after deletion of node after given value: ";
  traverseLL(head);
  return 0;
}