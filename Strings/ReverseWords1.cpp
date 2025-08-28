#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  cout << "Enter a string: ";
  // getline is used to take input of a string with spaces  as cin stops taking taking input after spaces//
  getline(cin, str);
  int n = str.length();
  reverse(str.begin(), str.end());
  string ans = "";
  for (int i = 0; i < n; i++)
  {
    string words = "";
    // comparison is done with a space so ' ' is used ..for a empty character "" is used//
    while (str[i] != ' ' && i < n)
    {
      words = words + str[i];
      i++;
    }
    reverse(words.begin(), words.end());
    if (words.length() > 0)
    {
      ans = ans + " " + words;
    }
  }
  string final_ans = ans.substr(1);
  cout << "Reversed words string is : " << final_ans << endl;
  return 0;
}