#include <bits/stdc++.h>
using namespace std;

string lastWords(string s)
{
  int n = s.length();
  vector<string> words;
  string temp = "";
  for (int i = 0; i < n; i++)
  {
    if (s[i] >= 'a' && s[i] <= 'z')
    {
      temp = temp + s[i];
    }
    else
    {
      if (temp.length() != 0)
      {
        words.push_back(temp);
        temp = "";
      }
    }
  }
  if (temp.length() != 0)
  {
    words.push_back(temp);
  }
  reverse(words.begin(), words.end());
  string result = "";
  for (int k = 0; k < words.size(); k++)
  {
    result = result + words[k] + '.';
  }
  int m = result.length();
  return result.substr(0, m - 1)
}

int main()
{
  string s;
  cout << "Enter a string: ";
  getline(cin, s);
  string reversed = lastWords(s);
  cout << "Reversed words: " << reversed << endl;
  return 0;
}