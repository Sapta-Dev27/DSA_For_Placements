#include <bits/stdc++.h>
using namespace std;

string reverseVowels(string s)
{
  int n = s.length();
  stack<char> st;
  for (int i = 0; i < n; i++)
  {
    char ch = s[i];
    if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') ||
        (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
    {
      st.push(ch);
    }
  }
  for(int i=0 ; i < n ; i++{
    char ch = s[i];
    if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') ||
        (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U')) {
          s[i]=st.top();
          st.pop();
        }
  })
  return s;
}

int main() {
  string s;
  cout << "Enter a string: ";
  cin >> s;
  string result = reverseVowels(s);
  cout << "String after reversing vowels: " << result << endl;
}