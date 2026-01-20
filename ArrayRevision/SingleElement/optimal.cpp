// OPTIMAL SOLUTION WOULD BE USING A 2 POINTER APPROACH BUT : CAN ONLY BE USED IF THE ARRAY IS SORTED AND CONTAINS AT MAX OF 2 DUPLICATE ELEMENTS 
// AND WE ARE NEEDED TO FIND THE  ONLY SINGLE ELEMENT

#include <bits/stdc++.h>
using namespace std;

int singleElement(vector<int>arr){
    int n = arr.size();
    int i = 0 ;
    int j = 1;
    while( i != n-1){
      if(j==n-2){
        i=i+2;
      }
      if(arr[i]==arr[j]){
        i=i+2;
        j=j+2;
      }
      else{
        return arr[i];
      }
    }
    return -1;
}

int main() {
  vector<int> ans = {1, 1, 2, 2, 3, 3, 4, 4, 5};
  int el = singleElement(ans);
  cout << el << endl;
  return 0;
}