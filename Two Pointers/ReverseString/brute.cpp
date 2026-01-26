#include <bits/stdc++.h>
using namespace std;

string reverse(string s)
{
  stack<char> st;
  int n = s.length();
  for (int i = 0; i < n; i++)
  {
    st.push(s[i]);
  }
  string res = "";
  while (!st.empty())
  {
    res.push_back(st.top());
    st.pop();
  }
  return res;
}

int main()
{
  string s;
  getline(cin, s);
  cout << reverse(s) << endl;
  return 0;
}