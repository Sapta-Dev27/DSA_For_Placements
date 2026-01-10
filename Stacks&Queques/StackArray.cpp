#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
  int top;
  int capacity;
  int arr[100];

  Stack(int size)
  {
    capacity = size;
    top = -1;
  }
/*Push into the stack*/
  void push(int x)
  {
    if (top == capacity - 1)
    {
      cout << "Stack Overflow" << endl;
    }
    top = top + 1;
    arr[top] = x;
    cout << x << " pushed to stack" << endl;
  }
//Pop from the stack
  void pop()
  {
    if (top == -1)
    {
      cout << "Stack Underflow" << endl;
    }
    int el = arr[top];
    top = top - 1;
    cout << el << " popped from stack" << endl;
  }
//Peek the top element
  void peek()
  {
    if (top == -1)
    {
      cout << "Stack is empty" << endl;
    }
    int topEl = arr[top];
    cout << "Top element is " << topEl << endl;
  }
//Check if stack is empty
  bool isEmpty()
  {
    if (top == -1)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
//Check if stack is full
  bool isFull()
  {
    if (top == capacity - 1)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
//Get the size of stack
  int size()
  {
    return top + 1;
  }
//Print stack elements
  void printStack()
  {
    if (top == -1)
    {
      cout << "Stack is empty" << endl;
    }
    cout << "Stack elements are: ";
    for (int i = 0; i <= top; i++)
    {
      cout << arr[i] << " ";
    }
  }
};

int main()
{
  int n;
  cout << "Enter stack capacity: ";
  cin >> n;
  Stack *S = new Stack(n);
  S->push(10);
  S->push(20);
  S->push(30);
  S->printStack();
  S->pop();
  S->peek();
  S->printStack();
  cout << "Stack size is " << S->size() << endl;
  if(S->isFull()){
    cout<<"Stack is full"<<endl;
  }
  else{
    cout<<"Stack is not full"<<endl;
  }
  if(S->isEmpty()){
    cout<<"Stack is empty"<<endl;
  }
  else{
    cout<<"Stack is not empty"<<endl;
  }
  return 0;
}
