#include <bits/stdc++.h>
using namespace std;

class MinStack
{
public:
  stack<pair<int, int>> st;

  void pushEL(int val)
  {
    if (st.empty())
    {
      st.push({val, val});
    }
    else
    {
      int currentMin = st.top().second;
      st.push({val, min(val, currentMin)});
    }
    cout << "Pushed " << val << " into the stack\n";
  }
  void popEl()
  {
    int poppedValue = st.top().first;
    st.pop();
    cout << "Popped " << poppedValue << " from the stack\n";
  }
  int topEl()
  {
    int topValue = st.top().first;
    return topValue;
  }
  bool isEmptyStack()
  {
    if (st.empty())
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  int getMin()
  {
    int minValue = st.top().second;
    return minValue;
  }
};

int main()
{
  MinStack minStack;

  minStack.pushEL(5);
  minStack.pushEL(3);
  minStack.pushEL(7);
  minStack.pushEL(2);

  cout << "Current Min: " << minStack.getMin() << "\n";
  cout << "Top Element: " << minStack.topEl() << "\n";

  minStack.popEl();
  cout << "Current Min after pop: " << minStack.getMin() << "\n";

  minStack.popEl();
  cout << "Top Element after pop: " << minStack.topEl() << "\n";

  return 0;
}