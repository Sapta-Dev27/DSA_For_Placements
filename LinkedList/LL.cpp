#include <iostream>
#include <vector>
using namespace std;

struct Node
{
  int data;
  Node *next;
  Node(int data1)
  {
    data = data1;
    next = nullptr;
  }
  Node(int data1, Node *next1)
  {
    data = data1;
    next = next1;
  }
};

Node *convertArr2LL(vector<int> arr)
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

int search(Node *head, int value)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    if (temp->data == value)
    {
      return 1;
    }
    temp = temp->next;
  }
  return 0;
}

int countNodes(Node *head)
{
  int count = 0;
  Node *temp = head;
  while (temp != nullptr)
  {
    count++;
    temp = temp->next;
  }
  return count;
}

int main()
{
  int n;
  cout << "Enter the number of elements  in the array: ";
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  /*converting array to linked list*/
  Node* head = convertArr2LL(arr);
  /*printing the linked list*/
  Node* temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << endl;
    temp = temp->next;
  }
  /*counting the number of nodes in the linked list*/
  int count = countNodes(head);
  cout << "The number of nodes in the linked list are: " << count << endl;
  int value;
  cout << "Enter the value to be searched: " << endl;
  cin >> value;
  int checkIfPresent = search(head, value);
  if (checkIfPresent == 1)
  {
    cout << "The value is present in the linked list" << endl;
  }
  else
  {
    cout << "The value is not present in the linked list" << endl;
  }
  return 0;
}