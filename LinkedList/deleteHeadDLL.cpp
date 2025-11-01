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
  };
  Node(int data1)
  {
    data = data1;
    next = nullptr;
    prev = nullptr;
  }
};

Node *convertArrToDLL(vector<int> arr)
{
  Node *head = new Node(arr[0]);
  Node *temp = head;
  for (int i = 1; i < arr.size(); i++)
  {
    Node *newNode = new Node(arr[i]);
    temp->next = newNode;
    newNode->prev = temp;
    temp = newNode;
  }
  return head;
}

Node *deleteHeadDLL(Node *head){
  Node *temp = head;
  if(head == nullptr){
    return nullptr;
  }
  if(head -> next == nullptr){
    free(head);
    return nullptr;
  }
  head = head -> next;
  head -> prev = nullptr;
  temp -> next = nullptr;
  free(temp);
  return head;
}

int main()
{
  int n;
  cout << "Enter number of elements in Doubly Linked List: ";
  cin >> n;
  vector<int> arr(n);
  cout << "Enter elements of Doubly Linked List: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  Node *head = convertArrToDLL(arr);
  cout << "Doubly Linked List created from array: ";
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
  head = deleteHeadDLL(head);
  cout << "Doubly Linked List after deleting head: ";
  temp = head;  
  while (temp != nullptr)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  return 0;
}