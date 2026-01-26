#include <bits/stdc++.h>
using namespace std;

string reverse(string s)
{
  int n = s.length();
  int i = 0;
  int j = n - 1;
  while (i <= j)
  {
    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;
    i++ ; 
    j--;
  }
  return s;
}

int main()
{
  string s;
  cout << "Enter string :" << endl;
  getline(cin,s);
  cout << reverse(s) << endl ;
  return 0;
}