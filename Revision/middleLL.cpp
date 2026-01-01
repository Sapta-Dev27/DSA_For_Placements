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

Node *middleLL(Node *head)
{
  if (head == NULL)
  {
    return NULL;
  }
  if (head->next == NULL)
  {
    return head;
  }
  int len = 0;
  Node *temp = head;
  while (temp != NULL)
  {
    len++;
    temp = temp->next;
  }
  temp = head;
  if (len % 2 == 0)
  {
    int count = 0;
    while (temp != NULL)
    {
      count++;
      if (count == (len / 2) + 1)
      {
        return temp;
      }
      temp = temp->next;
    }
  }
  else
  {
    int count = 0;
    while (temp != NULL)
    {
      count++;
      if (count == (len / 2) + 1)
      {
        return temp;
      }
      temp = temp->next;
    }
  }
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
  Node *head = convertArrayToLinkedList(arr);
  cout << "Linked List created from array is: ";
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
  Node *mid = middleLL(head);
  cout << "Middle node data is: " << mid->data << endl;
  return 0;
}