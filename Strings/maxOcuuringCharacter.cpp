#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cout << "Enter a string: ";
  getline(cin, s);
  int n = s.length();
  int MAX = INT_MIN;
  char c;
  for (int i = 0; i < n; i++)
  {
    int count = 0;
    for (int j = 0; j < n; j++)
    {
      if (s[i] == s[j])
      {
        count++;
      }
    }
    if (count > MAX)
    {
      MAX = count;
      c = s[i];
    }
  }
  cout << "MAXIMUM OCCURING CHARCTER : " << c << endl;
  return 0;
}

/*
TIME COMPLEXITY : O(N2)
SPACE COMPLEXITY : O(1)
*/