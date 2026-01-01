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

Node *convertarr2LL(vector<int> arr)
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

Node *reverseLL(Node *head, int left, int right)
{
  if (head == NULL)
  {
    return NULL;
  }
  if (head->next == NULL || left == right)
  {
    return head;
  }
  Node *temp = head;
  int count = 0;
  stack<int> st;
  while (temp != NULL)
  {
    count++;
    if (count >= left && count <= right)
    {
      st.push(temp->data);
    }
    temp = temp->next;
  }
  temp = head;
  count = 0;
  while (temp != NULL)
  {
    count++;
    if (count >= left && count <= right)
    {
      temp->data = st.top();
      st.pop();
    }
    temp = temp->next;
  }
  return head;
}

int main()
{
  int n;
  cout << "Enter number of elements in array : ";
  cin >> n;
  vector<int> arr(n);
  cout << "Enter elements of array : ";
  for (int i = 0; i < arr.size(); i++)
  {
    cin >> arr[i];
  }
  Node *head = convertarr2LL(arr);
  cout << "Linked List created from array is : ";
  traverseLL(head);
  int left, right;
  cout << "\nEnter left and right positions for reversal : ";
  cin >> left ;
  cin >> right ;
  head = reverseLL(head, left, right);
  cout << "\nReversed Linked List is : ";
  traverseLL(head);
  return 0;
}