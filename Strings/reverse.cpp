#include <iostream>
#include <string>
using namespace std;

int main(){
  string str;
  cout << "Enter the string : " << endl;
  cin >> str;
  int n = str.length();
  int start = 0;
  int end = n-1;
  while(start <= end){
    swap(str[start],str[end]);
    start++;
    end--;
  }
  cout << "The reversed string is : " << str << endl;
  return 0;
}