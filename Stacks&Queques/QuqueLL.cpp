#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
  int size;
  struct Node
  {
    int data;
    Node *next;
    Node(int data)
    {
      this->data = data;
      next = NULL;
    }
  };
  Node *front = NULL;
  Node *rear = NULL;

  void push(int x)
  {
    Node *newNode = new Node(x);
    if (front == NULL)
    {
      front = newNode;
      rear = newNode;
    }
    else
    {
      rear->next = newNode;
      rear = newNode;
    }
    size++;
    cout << newNode->data << " pushed to Queuqe" << endl;
  }

  void pop()
  {
    if (front == NULL)
    {
      cout << "Queue Underflow" << endl;
      return;
    }
    Node *temp = front;
    front = front -> next;
    int value = temp -> data;
    delete (temp);
    size--;
    cout << value << " popped from queuqe" << endl;
  }

  void peek(){
    if(front==NULL){
      cout << "Queue is empty" << endl;
      return;
    }
    int el = front -> data;
    cout << "Top element is " << el << endl;
  }

  void sizeOfQueue(){
    if(front==NULL){
      cout << "Queue is empty" << endl;
      return;
    }
    cout << "Current size of queue is " << size << endl;
  }

  bool isEmpty(){
    if(front == NULL){
      return true;
    }
    else {
      return false;
    }
  }

  void printQueue(){
    if(front == NULL)
    {
      cout << "Queue is empty" << endl;
      return;
    }
    Node *temp = front;
    while(temp !=NULL){
      cout << temp -> data << " ";
      temp = temp -> next;
    }
  }
};


int main(){
  Queue * q = new Queue();
  q -> push(10);
  q -> push(20);
  q -> push(30);
  q -> printQueue();
  q -> pop();
  q -> peek();
  q -> printQueue();
  q -> sizeOfQueue();
  if(q -> isEmpty()){
    cout<<"Queue is empty"<<endl;
  }
  else{
    cout<<"Queue is not empty"<<endl;
  }
  return 0;
}