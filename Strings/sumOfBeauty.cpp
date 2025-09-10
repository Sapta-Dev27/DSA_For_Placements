#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cout << "Enter a string: ";
  cin >> s;
  int n =s.length();
  int res=0;
  for(int i = 0 ; i < n ; i++){
    vector<int>freq(26,0);
    for( int j = i ; j < n ; j++){
      freq[s[j]-'a']++;
      int max = 0;
      for(int k = 0 ; k < 26 ; k++){
        if(freq[k] > max){
          max=freq[k];
        }
      }
      int min = INT_MAX;
      for(int k = 0; k < 26 ; k++){
        if(freq[k] > 0 && freq[k] < min){
          min = freq[k];
        }
      }
      res=res+(max-min);
    }
  }
  cout << "Sum of Beauty of all substrings: " << res << endl;
  return 0;
}