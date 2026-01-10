#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
  queue<int> q;

  void pushEl(int x)
  {
    int size = q.size();
    q.push(x);
    while (size--)
    {
      q.push(q.front());
      q.pop();
    }
    cout << x << " pushed to stack\n";
  }

  void popEl()
  {
    if (q.empty())
    {
      cout << "Stack is empty" << endl;
      return;
    }
    int poped = q.front();
    q.pop();
    cout << poped << " popped from stack\n";
  }

  void topEL()
  {
    if (q.empty())
    {
      cout << "Stack is empty" << endl;
      return;
    }
    int el = q.front();
    cout << el << " is at the top of stack\n";
  }

  bool isEmpty()
  {
    if (q.empty())
    {
      return true;
    }
    else
    {
      return false;
    }
  }
};

int main() {
  Stack * s1 = new Stack(); 
  s1->pushEl(10);
  s1->pushEl(20);
  s1->topEL();
  s1->popEl();
  s1->topEL();
  s1->popEl();
  s1->popEl();
  return 0;
}