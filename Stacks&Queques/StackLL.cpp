#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
  struct Node
  {
    int data;
    Node *next;
    Node(int data)
    { 
      this->data = data;
      next = nullptr;
    }
  };
  Node *top = NULL;
  int size = 0;

  void push(int x)
  {

    Node *newNode = new Node(x);
    newNode->next = top;
    top = newNode;
    size++;
    cout << newNode->data << " pushed to stack" << endl;
  }

  void pop()
  {
    if (top == NULL)
    {
      cout << "Stack Underflow" << endl;
      return;
    }
    Node *temp = top;
    int value = temp -> data;
    top = top->next;
    delete (temp);
    size--;
    cout << value << " popped from stack" << endl;
  }

  void peek()
  {
    if (top == NULL)
    {
      cout << "Stack is empty" << endl;
      return;
    }
    int el = top->data;
    cout << "Top element is " << el << endl;
  }

  bool isEmpty()
  {
    if (top == NULL)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  void sizeOfStack()
  {
    if (top == NULL)
    {
      cout << "Stack is empty" << endl;
      return;
    }
    cout << "Current size of stack is " << size << endl;
  }

  void printStack()
  {
    if (top == NULL)
    {
      cout << "Stack is empty" << endl;
      return;
    }
    Node *temp = top;
    while (temp != NULL)
    {
      cout << temp->data << " ";
      temp = temp->next;
    }
  }
};

int main() {
  Stack* S = new Stack();
  S->push(10);
  S->push(20);
  S->push(30);
  S->printStack();
  S->pop();
  S->peek();
  if(S->isEmpty()){
    cout<<"Stack is empty"<<endl;
  }
  else{
    cout<<"Stack is not empty"<<endl;
  }
  return 0;
}