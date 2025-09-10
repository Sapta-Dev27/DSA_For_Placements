#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cout << "Enter a string of parentheses: ";
  cin >> s ;
  int n = s.length();
  int maxDepth = 0;
  int currDepth =0;
  for(int i = 0 ; i < n ; i++) {
    if(s[i] == '('){
      currDepth++;
      maxDepth=max(maxDepth,currDepth);
    }
    if(s[i] == ')'){
      currDepth--;
    }
  }
  cout << "Maximum Depth of Parentheses: " << maxDepth << endl;
  return 0;
}