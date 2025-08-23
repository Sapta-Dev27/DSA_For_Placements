#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n ;
  cout << "Enter the value of n : ";
  cin >> n;
  int count = 0;
  for(int i = 1; i < n ; i++){
     if( i* i == n){
      break;
     }
     else if( i * i < n) {
      count++;
     }
     else {
      break;
     }
  }
  
  return 0;
}