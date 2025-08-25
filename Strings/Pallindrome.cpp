#include <iostream>
#include <string>
using namespace std;

bool ifPallindrome(string str)
{
  int n = str.length();
  int start = 0;
  int end = n - 1;
  while (start <= end)
  {
    if (str[start] == str[end])
    {
      start++;
      end--;
    }
    else
    {
      return false;
    }
  }
  return true;
}

int main()
{
  string str;
  cout << "Enter the string : " << endl;
  cin >> str;
  bool checkPallindrome = ifPallindrome(str);
  if (checkPallindrome)
  {
    cout << "The string is a pallindrome" << endl;
  }
  else
  {
    cout << "The string is not a pallindrome" << endl;
  }
  return 0;
}