#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
  int front;
  int rear;
  int capasity;
  int arr[100];
  int currSize;
  Queue(int size)
  {
    capasity = size;
    front = -1;
    rear = -1;
    currSize = 0;
  }

  /*Enqueue operation*/
  void enqueue(int x)
  {
    if (rear == capasity)
    {
      cout << "Queue Overflow" << endl;
      return;
    }
    if (currSize == 0)
    {
      front = 0;
    }
    rear= (rear +1) % capasity;
    arr[rear] = x;
    currSize++;
    cout << x << " enqueued to queue" << endl;
  }

  //Dequeue operation
  void dequeue(){
    if(currSize == 0){
      cout << "Queue Underflow" << endl;
      return;
    }
    int el = arr[front];
    if(currSize == 1){
      front = -1;
      rear = -1;
    }
    front = (front+1)% capasity;
    currSize--;
    cout << el << " dequeued from queue" << endl;
  }

  //Get Front Element : peek operation
  void peek() {
    if(currSize == 0){
      cout << "Queue is empty" << endl;
      return;
    }
    int frontEl = arr[front];
    cout << "Front element is " << frontEl << endl;
  }

  //Get current size of queue
  void size(){
    if(currSize == 0){
      cout << "Queue is empty" << endl;
      return;
    }
    cout << "Current size of queue is " << currSize << endl;
  }
  //Is queue empty
  bool isEmpty() {
    if(currSize==0){
      return true;
    }
    else {
      return false;
    }
  }

  //is queue full
  bool isFull(){
    if(currSize==capasity){
      return true;
    }
    else {
      return false; 
    }
  }

  //Print queue elements 
  void printQueue(){
    if(currSize == 0){
      cout << "Queue is empty" << endl;
      return;
    }
    cout << "Queue elements are: ";
    for(int i =0 ; i<= currSize -1 ; i++){
      cout << arr[(front + i) % capasity] << " ";
    }
  }
};

int main() {
  Queue* q = new Queue(5);
  q->enqueue(10);
  q->enqueue(20);
  q->enqueue(30);
  q->printQueue();
  q->dequeue();
  q->peek();
  q->printQueue();
  q->size();
  if(q->isFull()){
    cout<<"Queue is full"<<endl;
  }
  else{
    cout<<"Queue is not full"<<endl;
  }
  if(q->isEmpty()){
    cout<<"Queue is empty"<<endl;
  }
  else{
    cout<<"Queue is not empty"<<endl;
  }
}