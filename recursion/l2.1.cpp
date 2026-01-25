#include <bits/stdc++.h>
using namespace std;

void print(int i , int n)
{
  if (i > n)
  {
    return;
  }
  cout << i << endl;
  i++;
  print(i,n);
}

int main()
{
  int n;
  cin >> n;
  print(1 , n);
}

// explanation : recursive code for printing 1-N , T.C = 0(N) ; S.C = 0(N) -> auxillary stack space . 
// Recursive Tree => f(1,5) -> f(2,5) -> f(3,5) -> f(4,5) -> f(5,5)