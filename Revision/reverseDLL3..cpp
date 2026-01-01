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

Node *reverseDLL(Node *head)
{
  if (head == NULL)
  {
    return NULL;
  }
  if (head->next == NULL)
  {
    return head;
  }
  Node *temp = head;
  Node *lastNode = NULL ;
  while (temp != NULL)
  {
    lastNode = temp->prev;
    temp->prev = temp->next;
    temp->next = lastNode;
    temp = temp->prev;
  }
  return  lastNode->prev;
}

int main()
{
  int n;
  cout << "Enter number of elements in array : ";
  cin >> n;
  vector<int> arr(n);
  cout << "Enter elements of array : ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  Node *head = convertarr2LL(arr);
  cout << "Linked List before reversal : ";
  traverseLL(head);
  head = reverseDLL(head);
  cout << "\nLinked List after reversal : ";
  traverseLL(head);
  return 0;
}