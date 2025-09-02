#include <iostream>
using namespace std;

bool ifEqual(int freq1[] , int freq2[]){
  for(int i = 0 ; i < 26 ; i++) {
    if(freq1[i] != freq2[i]){
      return false;
    }
  }
  return true;
}


int main() {
  string str1;
  cout << "Enter the string 1" << endl ;
  cin >> str1;
  string str2;
  cout << "Enter the string 2" << endl ;
  cin >> str2;
  int freq[26]= {0};
  for(int i = 0 ; i < str1.length(); i++) {
    freq[str1[i]-'a']++;
  }
  int windowSize = str1.length();
  for(int i = 0 ; i < str2.length();i++){
    int freq2[26]= {0};
    int windowIndex = 0;
    int index = i;
    while( windowIndex < windowSize && index < str2.length()){
      freq2[str2[index]-'a']++;
      windowIndex++;
      index++;
    }
    if(ifEqual(freq , freq2)){
      cout << "String 1 is a permutation of string 2" << endl;
      return 0;
    }
  
  }
  cout << "String 1 is not a permutation of string 2" << endl;
  return 0;
}