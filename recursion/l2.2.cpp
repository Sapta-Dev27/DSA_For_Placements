#include <bits/stdc++.h>
using namespace std;

void print(int i ,int n ){
  
  if( i >= n ){
    return ;
  }
  cout << "HELLO" << endl;
  i++;
  print(i,n);
}

int main() {
  int n ;
  cin >> n ;
  print(0,n);
}


// explanation : recursive code for printing N times HELLO, T.C = 0(N) ; S.C = 0(N) -> auxillary stack space . 
// Recursive Tree => f(0,5) -> f(1,5) -> f(2,5) -> f(3,5) -> f(4,5)