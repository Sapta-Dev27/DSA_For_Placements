#include <bits/stdc++.h>
using namespace std;

string PrefixToInfix(string s)
{
  stack<string> st;
  for (int i = s.length() - 1; i >= 0; i--)
  {
    char c = s[i];
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
    {
      st.push(string(1, c));
    }
    else
    {
      string s1 = st.top();
      st.pop();
      string s2 = st.top();
      st.pop();
      st.push( "(" + s1 + string(1,c) + s2 + ")");
    }
  return st.top();
  }
}

int main()
{
  string s = "*+ab+cd";
  cout << "Resultant Infix Expression is: ";
  cout << PrefixToInfix(s) << endl;
  return 0;
}