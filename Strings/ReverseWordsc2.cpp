#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  cout << "Enter a string :" << endl;
  getline(cin, str);
  int n = str.length();
  string ans = "";
  for (int i = 0 ; i < n ; i++) {
    string words = "";
    while(str[i] != ' ' && i < n ) {
      words = words + str[i];
      i++;
    }
    reverse(words.begin() , words.end());
    if(words.length() > 0){
      ans = ans + " " + words;
    }
  }
  string final_ans = ans.substr(1);
  cout << "Reversed words string is : " << final_ans << endl;
  return 0;
}