#include <bits/stdc++.h>
using namespace std;

int lengthofLastWord(string s)
{
  int n = s.length();
  int i = n - 1;
  string temp = "";
  int m = 0;
  while (i >= 0)
  {
    if (s[i] == ' ' && temp.length() == 0)
    {
      i--;
    }
    else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] <= 'A' && s[i] >= 'Z'))
    {
      temp.push_back(s[i]);
      i--;
    }
    else if (s[i] == ' ' && temp.length() != 0)
    {
      m = temp.length();
      break;
    }
  }
  if (temp.length() != 0)
  {
    m = temp.length();
  }
  return m;
}

int main()
{
  string s;
  cout << "Enter a string: ";
  getline(cin, s);
  int result = lengthofLastWord(s);
  cout << "Length of last word: " << result << endl;
  return 0;
}