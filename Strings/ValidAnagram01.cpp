#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s1, string s2)
{
  if (s1.length() != s2.length())
  {
    return false;
  }
  int count[26] = {0};
  for (int i = 0; i < s1.length(); i++)
  {
    count[s1[i] - 'a']++;
    count[s2[i] - 'a']--;
  }
  for (int i = 0; i < 26; i++)
  {
    if (count[i] != 0)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  string s1, s2;
  cout << "Enter first string: ";
  cin >> s1;
  cout << "Enter second string: ";
  cin >> s2;
  if (isAnagram(s1, s2))
  {
    cout << "The strings are anagrams." << endl;
  }
  else
  {
    cout << "The strings are not anagrams." << endl;
  }
  return 0;
}