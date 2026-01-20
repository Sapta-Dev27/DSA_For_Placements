#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>arr){
  int n = arr.size();
  int max =(n/2);
  for(int i=0 ; i < n ; i++){
    int count=0;
    for(int j=0 ; j < n ; j++){
      if(arr[i]==arr[j]){
        count++;
      }
    }
    if(count > max){
      return arr[i];
    }
  }
  return -1;
  
}


int main() {
 vector<int>ans={1,2,3,2,2,1,2,3,2,2};
 int majority= majorityElement(ans);
 cout <<majority << endl;
 return 0;
}

// Brute Force  :  T. C : 0(N^2) ; S.C : 0(1)