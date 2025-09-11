#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cout << "Enter a number in string format: ";
  cin >> s;
  int n = s.size();
  long long rem = 0;
  for(int i = 0 ; i < n ; i++){
    int digit = s[i]-'0';
    rem = ((rem*10)+digit)%7;
  }
  if(rem==0){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}