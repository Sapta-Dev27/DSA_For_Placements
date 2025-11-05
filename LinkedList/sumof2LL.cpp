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

Node *sumOf2LL(Node *head1, Node *head2)
{
  Node *dummy = new Node(-1);
  Node *temp1 = head1;
  Node *temp2 = head2;
  Node *curr = dummy;
  int carry = 0;
  while (temp1 != nullptr || temp2 != nullptr)
  {
    int sum = carry;
    if (temp1)
    {
      sum += temp1->data;
    }
    if (temp2)
    {
      sum += temp2->data;
    }
    carry = sum / 10;
    Node *newNode = new Node(sum % 10);
    curr->next = newNode;
    curr = newNode;
    if (temp1)
    {
      temp1 = temp1->next;
    }
    if (temp2)
    {
      temp2 = temp2->next;
    }
  }
  if (carry)
  {
    Node *newNode = new Node(carry);
    curr->next = newNode;
    curr = newNode;
  }
  return dummy->next;
}

int main()
{
  int n1;
  cout << "Enter the size of array 1: ";
  cin >> n1;
  vector<int> arr1(n1);
  cout << "Enter the elements of array 1: ";
  for (int i = 0; i < n1; i++)
  {
    cin >> arr1[i];
  }
  Node *head1 = convertArrayToLinkedList(arr1);
  cout << "Linked List created from array is: ";
  Node *temp1 = head1;
  while (temp1 != nullptr)
  {
    cout << temp1->data << " ";
    temp1 = temp1->next;
  }
  cout << endl;
  int n2;
  cout << "Enter the size of array 2: ";
  cin >> n2;
  vector<int> arr2(n2);
  cout << "Enter the elements of array 2: ";
  for (int i = 0; i < n2; i++)
  {
    cin >> arr2[i];
  }
  Node *head2 = convertArrayToLinkedList(arr2);
  cout << "Linked List created from array is: ";
  Node *temp2 = head2;
  while (temp2 != nullptr)
  {
    cout << temp2->data << " ";
    temp2 = temp2->next;
  }
  cout << endl;
  Node * head = sumOf2LL(head1, head2);
  cout << "Linked List after reversing is: ";
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  return 0;
}