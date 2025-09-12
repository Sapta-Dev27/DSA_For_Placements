#include <bits/stdc++.h>
using namespace std;

int checkString(string s1, string s2)
{
  int n = s1.length();
  int m = s2.length();
  if (m == 0)
  {
    return 0;
  }
  if (m > n)
  {
    return -1;
  }
  for (int i = 0; i <= n - m; i++)
  {
    if (s1.substr(i, m) == s2)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  string s1;
  string s2;
  cout << "Enter a string 1: ";
  cin >> s1;
  cout << "Enter a string 2: ";
  cin >> s2;
  int index = checkString(s1, s2);
  if (index == -1)
  {
    cout << "String 2 is not present in String 1" << endl;
  }
  else
  {
    cout << "String 2 is present in String 1 at index: " << index << endl;
  }
  return 0;
}