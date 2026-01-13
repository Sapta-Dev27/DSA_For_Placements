#include <bits/stdc++.h>
using namespace std;

string PrefixToPostfixExp(string s)
{
  stack<string>st;
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
      st.push(s1 + s2 + string(1, c));
    }
  }
  return st.top();
}

int main()
{
  string s = "ab+cde+**";
  cout << "Resultant Prefix Expression is: ";
  cout << PrefixToPostfixExp(s) << endl;
  return 0;
}