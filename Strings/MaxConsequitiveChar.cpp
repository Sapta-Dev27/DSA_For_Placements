#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cout << "Enter the string :" <<endl;
  cin >> s;
  int n = s.length();
  int power = 1;
  int max_power =1;
  for(int i = 1 ; i < n ; i++) {
    if(s[i] == s[i-1]){
       power++;
    }
    else {
      power=1;
    }
    max_power = max(power , max_power);
  }
  cout<<max_power<<endl;
  return 0;
}