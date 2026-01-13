#include <bits/stdc++.h>
using namespace std;


string PostfixToInfix( string s){
  stack<string>st;
  for(int i=0 ; i < s.length(); i++){
    char c = s[i];
    if( (c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z') || ( c >= '0' && c <= '9')){
      st.push(string(1,c));
    }
    else {
      string s1 = st.top();
      st.pop();
      string s2 = st.top();
      st.pop();
      st.push("(" + s2 + string(1,c) + s1+ ")");
    }
  }
  return st.top();
}

int main() {
  string s = "ab+cde+**";
  cout << "Resultant Infix Expression is: ";
  cout << PostfixToInfix(s) << endl;
  return 0;
}

/*
  Complexity Analysis:
  Time complexity : O(n)
  Space complexity: O(n)
*/