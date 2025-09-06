#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s)
{
  int n = s.length();
  int i = 0;
  while (i < n - 1)
  {
    if (s[i] == s[i + 1])
    {
      s.erase(i, 2);
      if (i > 0)
      {
        i--;
      }
    }
    else
    {
      i++;
    }
  }
  return s;
}

int main()
{
  string s;
  cout << "Enter a string: ";
  cin >> s;
  string newString = removeDuplicates(s);
  cout << "String after removing duplicates: " << newString << endl;
  return 0;
}
