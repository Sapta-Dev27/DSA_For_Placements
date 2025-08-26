#include <iostream>
#include <string>
using namespace std;

int stringToNumber(char ch)
{
  return ch - '0';
}

int main()
{
  string str;
  cout << "Enter the string : " << endl;
  cin >> str;
  int n = str.length();
  int max = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if ((stringToNumber(str[i])) % 2 != 0)
    {
      if (stringToNumber(str[i]) > max)
      {
        max= stringToNumber(str[i]);
      }
    }
  }
  cout << max << endl;
  return 0;
}