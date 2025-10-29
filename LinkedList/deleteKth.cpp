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

Node *deleteFromKthIndex(Node *head, int k)
{
  if (head == nullptr)
  {
    return head;
  }
  if (k == 1)
  {
    Node *temp = head;
    head = head->next;
    free(temp);
    return head;
  }
  int count = 0;
  Node *temp = head;
  Node *prev = nullptr;
  while (temp != nullptr)
  {
    count++;
    if (count == k)
    {
      prev->next = prev->next->next;
      free(temp);
      break;
    }
    prev = temp;
    temp = temp->next;
  }
  return head;
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
  int k;
  cout<<"\nEnter the index to delete: ";
  cin>>k;
  Node *newHead = deleteFromKthIndex(head, k);
  cout << "\nLinked List after deleting head is: ";
  Node *temp2 = newHead;
  while (temp2 != nullptr)
  {
    cout << temp2->data << " ";
    temp2 = temp2->next;
  }
  return 0;
}