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

Node *reverseLinkedList(Node *head , int left , int right){
    if(head == nullptr){
    return nullptr;
    }
    if(head -> next == nullptr){
    return head;
    }
    if(left == right){
        return head;
    }
    stack<int> st;
    Node *temp = head;
    int count =0;
    while(temp != nullptr){
        count++;
        if(count >= left && count <= right){
            st.push(temp->data);
        }
        temp = temp->next;
    }
    temp = head;
    count =0;
    while(temp != nullptr){
        count++;
        if(count >= left && count <= right){
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
  cout << endl;
  int left , right;
  cout << "Enter left and right positions: ";
  cin >> left >> right;
  head = reverseLinkedList(head, left , right);
  cout << "Linked List after reversing is: ";
  temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  return 0;
}