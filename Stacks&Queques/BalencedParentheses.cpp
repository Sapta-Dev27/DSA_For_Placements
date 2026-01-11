#include <bits/stdc++.h>
using namespace std;

bool isBalencedParentheses(string s)
{
  stack<char> st;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == '(' || s[i] == '{' || s[i] == '[')
    {
      st.push(s[i]);
    }
    else
    {
      if (st.empty())
      {
        return false;
      }
      char ch = st.top();
      st.pop();
      if (ch == '(' && s[i] != ')' || ch == '{' && s[i] != '}' || ch == '[' && s[i] != ']')
      {
        continue;
      }
      else
      {
        return false;
      }
    }
  }
  return st.empty();
}

int main()
{
  string str;
  cout << "Enter the parentheses string: ";
  cin >> str;
  if (isBalencedParentheses())
  {
    cout << "Balenced Parentheses" << endl;
  }
  else
  {
    cout << "Not a Balenced Parentheses" << endl;
  }
  return 0;
}