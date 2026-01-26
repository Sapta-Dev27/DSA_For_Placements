#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s)
{
  int n = s.length();
  string res = "";
  unordered_map<char, int> mp;
  for (int i = 0; i < n; i++)
  {
    char ch = s[i];
    mp[ch]++;
    if (mp[ch] == 1)
    {
      res.push_back(ch);
    }
  }
  return res;
}

int main()
{
  string s;
  getline(cin, s);
  cout << removeDuplicates(s) << endl;
  return 0;
}