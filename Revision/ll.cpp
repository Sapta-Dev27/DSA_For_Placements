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

int countNodes(Node *head)
{
  int count = 0;
  Node *temp = head;
  while (temp != NULL)
  {
    count++;
    temp = temp->next;
  }
  return count;
}

bool searchInLL(Node *head, int key)
{
  Node *temp = head;
  while (temp != NULL)
  {
    if (temp->data == key)
    {
      return true;
    }
    else
    {
      temp = temp->next;
    }
  }
  return false;
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
  cout << "\nThe number of nodes in the linked list are: " << countNodes(head) << endl;
  int key;
  cout << "Enter the element to be searched in the linked list: ";
  cin >> key;
  if (searchInLL(head, key))
  {
    cout << "Element found in the linked list." << endl;
  }
  else
  {
    cout << "Element not found in the linked list." << endl;
  }
  return 0;
}