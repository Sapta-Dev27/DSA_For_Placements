#include<iostream>
#include<vector>
using namespace std;

int main() {
  int n ;
  cout << "Enter the size of array : ";
  cin >> n;
  vector<int>arr(n);
  cout << "Enter the elements of array : ";
  for(int i = 0 ; i < n ; i++){
    cin >>arr[i];
  }
  int count = 0;
  for(int i = 0 ; i < n ;i++){
    if( arr[i] > arr[i+1]){
      count++;
    }
  }
  if(count == 0){
    cout << "Array is not rotated" << endl;
  }
  else if(count == 1){
    cout << "Array is rotated" << endl;
  }
  else{
    cout << "Array is not sorted and rotated" << endl;
  }
  return 0;
}