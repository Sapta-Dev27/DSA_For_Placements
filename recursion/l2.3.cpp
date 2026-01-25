#include <bits/stdc++.h>
using namespace std; 

void print(int i ,int n){
  if(i == 0){
    return ;
  }
  cout << i << endl;
  i--;
  print(i,n);
}

int main(){
  int n ;
  cin >> n ;
  print(n,n);
}


// explanation : recursive code for printing N-1, T.C = 0(N) ; S.C = 0(N) -> auxillary stack space . 
// Recursive Tree => f(5,5) -> f(4,5) -> f(3,5) -> f(2,5) -> f(1,5)