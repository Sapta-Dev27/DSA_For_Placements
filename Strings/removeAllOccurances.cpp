#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cout << "Enter a string: ";
  getline(cin,str);
  string part;
  cout << "Enter a part to be removed: ";
  getline(cin,part);
  while(str.length() != 0 && str.find(part) < str.length()){
      str.erase(str.find(part), part.length());
  }
  cout << str << endl;
  return 0;
}