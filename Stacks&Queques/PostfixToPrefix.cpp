#include <bits/stdc++.h>
using namespace std;

string PostfixtoPrefix(string s)
{
  stack<string> st;
  for (int i = 0; i < s.length(); i++)
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
      st.push(string(1,c) + s2 + s1);
    }
  }
  return st.top();
}

int main()
{
  string s = "ab+cde+**";
  cout << "Resultant Prefix Expression is: ";
  cout << PostfixtoPrefix(s) << endl;
  return 0;
}