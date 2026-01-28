#include <bits/stdc++.h>
using namespace std;

int fibonacii(int n){
  if(n==0){
    return 0;
  }
  if(n==1){
    return 1;
  }
  return fibonacii(n-1)+fibonacii(n-2);
}

int main() {
  int n ;
  cin >>n ;
  cout << fibonacii(n) << endl;
  return 0;
}

