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

Node *sort012(Node *head)
{
  if (head == NULL)
  {
    return head;
  }
  if (head->next == NULL)
  {
    return head;
  }
  Node *temp = head;
  vector<int> arr;
  while (temp != NULL)
  {
    if (temp->data == 0)
    {
      arr.push_back(0);
    }
    temp = temp->next;
  }
  temp = head;
  while (temp != NULL)
  {
    if (temp->data == 1)
    {
      arr.push_back(1);
    }
    temp = temp->next;
  }
  temp = head;
  while (temp != NULL)
  {
    if (temp->data == 2)
    {
      arr.push_back(2);
    }
    temp = temp->next;
  }
  temp = head;
  int count = 0;
  while (temp != NULL)
  {
    count++;
    temp->data = arr[count - 1];
    temp = temp->next;
  }
  return head;
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
  head = sort012(head);
  cout << "\nThe linked list after odd-even rearrangement is: ";
  traverseLL(head);
  return 0;
}

// Time Complexity: O(N)+0(N)= O(2N)
// Space Complexity: O(1)
