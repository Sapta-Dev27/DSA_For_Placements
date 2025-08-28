#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  int n;
  cout << "Enter the no of elements in the character array  : " << endl;
  cin >> n;
  char ch[n];
  cin >> ch;
  int count = 0;
  int i = 0;
  while (ch[i] != '\0')
  {
    count++;
    i++;
  }
  cout << "The length of the string is : " << count << endl;
  return 0;
}