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

Node *oddEvenLL(Node *head)
{
  if (head == NULL)
  {
    return NULL;
  }
  if (head->next == NULL)
  {
    return head;
  }
  Node *odd = head;
  Node *even  = head -> next;
  Node *oddNode = head ;
  Node *evenHead = even;
  Node *lastEven = NULL;
  while ( even!= NULL && even ->next != NULL){
    odd -> next = odd -> next ->next;
    even -> next = even -> next -> next;
    lastEven = even;
    odd = odd -> next;
    even = even -> next;
  }
  odd ->next = NULL;
  if(even != NULL) {
      even -> next = oddNode;
  }
  else{
  lastEven->next = oddNode;
  }
  return evenHead;
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
  head = oddEvenLL(head);
  cout << "\nThe linked list after odd-even rearrangement is: ";
  traverseLL(head);
  return 0;
}

// Time Complexity: O(N/2)+0(N/2)= O(N)
// Space Complexity: O(N)
