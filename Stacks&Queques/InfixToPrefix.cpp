#include <bits/stdc++.h>
using namespace std;

int priority(char c)
{
  if (c == '^')
  {
    return 3;
  }
  else if (c == '*' || c == '/')
  {
    return 2;
  }
  else if (c == '+' || c == '-')
  {
    return 1;
  }
  else
  {
    return -1;
  }
}

string InfixToPrefix(string s)
{
  stack<char> st;
  string result = "";
  reverse(s.begin(), s.end());
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == '(')
    {
      s[i] = ')';
    }
    else
    {
      if (s[i] == ')')
      {
        s[i] = '(';
      }
    }
  }
  for (int i = 0; i < s.length(); i++)
  {
    char c = s[i];
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
    {
      result = result + c;
    }
    else if (c == '(')
    {
      st.push(c);
    }
    else if (c == ')')
    {
      while (st.top() != '(')
      {
        result = result + st.top();
        st.pop();
      }
    }
    else
    {
      if (c == '^')
      {
        while (!st.empty() && priority(c) <= priority(st.top()))
        {
          result = result + st.top();
          st.pop();
        }
      }
      else
      {
        while (!st.empty() && priority(c) < priority(st.top()))
        {
          result = result + st.top();
          st.pop();
        }
      }
      st.push(c);
    }
  }
  while (!st.empty())
  {
    result = result + st.top();
    st.pop();
  }
  reverse(result.begin(), result.end());
  return result;
}

int main()
{
  string s = "(p+q)*(c-d)"; // Infix expression
  cout << "Infix expression: " << s << endl;
  cout << "Prefix Expression: " << InfixToPrefix(s) << endl; // Output the prefix expression
  return 0;
}