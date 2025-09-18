
#include <bits/stdc++.h>
using namespace std;

int findMin1s(vector<vector<int>>arr){
  int n = arr.size();
  int m = arr[0].size();
  int minCount = INT_MAX;
  int index = -1;
  for(int i = 0 ; i < n ; i++){
    int count  =0 ;
    for(int j = 0 ; j < m ; j++){
       if(arr[i][j]==1){
        count++;
       }
    }
    if( count < minCount &&  count != 0){
      minCount=count;
      index = i+1;
    }
  }
  return index;

}

int main() {
  int rows ;
  int cols ;
  cout << "Enter number of rows and columns: ";
  cin >> rows >> cols;
  vector<vector<int>>arr(rows,vector<int>(cols));
  for(int i = 0 ; i < rows ; i++){
    for(int j= 0 ; j < cols ; j++){
      cin >> arr[i][j];
    }
  }
  int index = findMin1s(arr);
  if(index==-1){
    cout << "No 1's present in the matrix" << endl;
  }
  else {
    cout << "Row with minimum 1's is: " << index << endl;
  }
  return 0;
}