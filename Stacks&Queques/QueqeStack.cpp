#include <bits/stdc++.h>
using namespace std;

class Queue {
  public :
  stack<int>s1;
  stack<int>s2;
  void push (int x){
    while(s1.size()){
      s2.push(s1.top());
      s1.pop();
    }
    s1.push(x);
    while(s2.size()){
      s1.push(s2.top());
      s2.pop();
    }
  }

  int popEl(){
    if(s1.size() == 0){
      return -1;
    }
    int el = s1.top();
    s1.pop();
    return el;
  }

  int topEl(){
    if(s1.size() == 0){
      return -1;
    }
    int el = s1.top();
    return el;
  }

  bool isEmpty(){
    if(s1.size() == 0){
      return true;
    }
    else{
      return false;
    }
  }

};

int main() {
  Queue *q = new Queue();
  q->push(10);
  q->push(20);
  q->push(30);
  cout<<q->topEl()<<endl;
  cout<<q->popEl()<<endl;
  cout<<q->topEl()<<endl;
  cout<<q->isEmpty()<<endl;
  return 0;
}