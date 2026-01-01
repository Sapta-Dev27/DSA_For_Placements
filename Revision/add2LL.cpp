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

Node *addTwoLL(Node *head1, Node *head2)
{
  if (head1 == NULL && head2 == NULL)
  {
    return NULL;
  }
  Node *dummyNode = new Node(-1);
  Node *curr = dummyNode;
  int carry = 0;
  Node *temp1 = head1;
  Node *temp2 = head2;
  while (temp1 != NULL || temp2 != NULL)
  {
    int sum = carry;
    if (temp1)
    {
      sum = sum + temp1->data;
    }
    if (temp2)
    {
      sum = sum + temp2->data;
    }
    Node *newNode = new Node(sum % 10);
    carry = sum / 10;
    curr->next = newNode;
    curr = curr->next;
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
  }
  return dummyNode->next;
}

int main()
{
  int n1;
  cout << "Enter the no of elements in the array for LL1: ";
  cin >> n1;
  vector<int> arr1(n1);
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n1; i++)
  {
    cin >> arr1[i];
  }
  Node *head1 = convertToLL(arr1);
  int n2;
  cout << "Enter the no of elements in the array for LL2: ";
  cin >> n2;
  vector<int> arr2(n2);
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n2; i++)
  {
    cin >> arr2[i];
  }
  Node *head2 = convertToLL(arr2);
  Node *resultHead = addTwoLL(head1, head2);
  cout << "The resultant linked list after adding the two linked lists is: ";
  traverseLL(resultHead);
  return 0;
}