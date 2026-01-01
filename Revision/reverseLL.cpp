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

Node *convertarr2LL(vector<int>arr){
  Node *head = new Node(arr[0]);
  Node *mover = head;
  for(int i = 1 ; i < arr.size() ; i++){
    Node *temp = new Node(arr[i]);
    mover -> next = temp;
    mover = mover -> next;
  }
  return head;
}

void traverseLL(Node *head){
  Node *temp = head;
  while(temp != NULL){
    cout << temp -> data << " ";
    temp = temp -> next;
  }
}

Node *reverseLL(Node *head){
  Node *temp = head;
  //SC : O(n) for stack//
  stack<int>st;
  //0(n) time to push all elements into stack
  while(temp !=NULL){
    st.push(temp->data);
    temp = temp -> next;
  }
  //0(n) time to pop all elements from stack and update linked list
  Node *curr = head ;
  while(curr != NULL){
    curr->data = st.top();
    st.pop();
    curr = curr -> next;
  }
  return head;
}

int main()
{
  int n;
  cout << "Enter number of elements in array " << endl;
  cin >> n;
  vector<int> arr(n);
  cout << "Enter elements of array " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  Node *head = convertarr2LL(arr);
  cout << "Linked List is : ";
  traverseLL(head);
  head = reverseLL(head);
  cout << "\nReversed Linked List is : ";
  traverseLL(head);
  return 0;
}

// required TC : 0(2n) , SC : O(n)