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

bool pallindromeLL(Node *head)
{
  if (head == NULL)
  {
    return true;
  }
  if (head->next == NULL)
  {
    return true;
  }
  Node *temp = head;
  stack<int> st;
  while (temp != NULL)
  {
    st.push(temp->data);
    temp = temp->next;
  }
  temp = head;
  while (temp != NULL)
  {
    if (temp->data == st.top())
    {
      st.pop();
      temp = temp->next;
    }
    else
    {
      return false;
    }
  }
  return true;
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
  if (pallindromeLL(head))
  {
    cout << "The linked list is a pallindrome." << endl;
  }
  else
  {
    cout << "The linked list is not a pallindrome." << endl;
  }
  return 0;
}