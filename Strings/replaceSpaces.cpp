#include <bits/stdc++.h>
using namespace std;

int main(){
  string str;
  cout << "Enter a string :" << endl;
  getline(cin,str);
  int n = str.length();
  string temp = "";
  for(int i = 0 ; i < n ; i++){
    if(str[i] != ' '){
      temp.push_back(str[i]);
    }
    else {
      temp.push_back('@');
    }
  }
  cout << "String after replacing spaces with @ is : " << temp << endl;
  return 0;
}