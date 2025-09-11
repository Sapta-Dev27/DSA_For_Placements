#include <bits/stdc++.h>
using namespace std;

bool isPanagram(string s)
{
  int n = s.length();
  vector<int> freq(26, 0);
  for (int i = 0; i < n; i++)
  {
    if (s[i] >= 'a' && s[i] <= 'z')
    {
      freq[s[i] - 'a']++;
    }
    if (s[i] >= 'A' && s[i] <= 'Z')
    {
      freq[s[i] - 'A']++;
    }
  }
  for (int k = 0; k < 26; k++)
  {
    if (freq[k] == 0)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  string s;
  cout << "Enter the string :" << endl;
  getline(cin, s);
  if (isPanagram(s))
  {
    cout << "Panagram";
  }
  else
  {
    cout << "Not a Panagram";
  }
  return 0;
}