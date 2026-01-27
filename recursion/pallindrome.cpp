#include <bits/stdc++.h>
using namespace std;

bool pallindrome(string &s, int l, int r)
{
  if (l > r)
  {
    return true;
  }
  if (s[l] != s[r])
  {
    return false;
  }
  return pallindrome(s, l + 1, r - 1);
}

int main()
{
  string s = "MADAM";
  string s1 = "MAEDAM";
  cout << pallindrome(s, 0, s.length() - 1) << endl;
  return 0;
}