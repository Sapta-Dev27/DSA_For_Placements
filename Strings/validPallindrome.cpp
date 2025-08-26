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

string alphanumericString(string str)
{
  int n = str.length();
  string temp = "";
  for(int i = 0 ; i < n ; i++) {
    if((str[i] >= 'A' && str[i] <='Z') || (str[i] >='a' && str[i] <='z') || (str[i] >='0' && str[i] <='9')){
      temp.push_back(str[i]);
    }
  }
  return temp;
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
  string temp = alphanumericString(str);
  int m = temp.length();
  bool isValidPallindrome = checkValidPallindrome(temp, m);
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