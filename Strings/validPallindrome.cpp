#include <iostream>
#include <string>
using namespace std;

char toLowerCase(char ch)
{
  if (ch >= 'A' && ch <= 'Z')
  {
    ch = ch - 'A' + 'a';
  }
  else
  {
    return ch;
  }
  return ch;
}

bool checkValidPallindrome(string str, int n)
{
  int start = 0;
  int end = n - 1;
  while (start <= end)
  {
    if (toLowerCase(str[start]) == toLowerCase(str[end]))
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
  cout << "Enter a string:";
  cin >> str;
  int n = str.length();
  bool isValidPallindrome = checkValidPallindrome(str, n);
  if (isValidPallindrome)
  {
    cout << "The string is a valid pallindrome" << endl;
  }
  else
  {
    cout << "The string is not a valid pallindrome" << endl;
  }
  return 0;
}