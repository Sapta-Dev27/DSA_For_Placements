#include <bits/stdc++.h>
using namespace std;

string vowel(string s)
{
  int n = s.length();
  string res = "";
  for (int i = 0; i < n; i++)
  {
    char ch = s[i];
    if ((ch != 'a') && (ch != 'e') && (ch != 'i') && (ch != 'o') && (ch != 'u') && (ch != 'A') && (ch != 'E') && (ch != 'I') && (ch != 'O') && (ch != 'U'))
    {
      res = res + ch;
    }
  }
  return res;
}

int main()
{
  string s;
  cout << "Enter a string: ";
  cin >> s;
  string result = vowel(s);
  cout << "String after removing vowels: " << result << endl;
}