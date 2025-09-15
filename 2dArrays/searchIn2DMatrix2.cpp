#include <bits/stdc++.h>
using namespace std;

bool searchMatrix( vector<vector<int>>nums , int target) {
  int n = nums.size();
  int m = nums[0].size();
  int rows = 0;
  int cols = m-1;
  while ( cols >=0 && rows <= n-1){
   if(nums[rows][cols] == target){
    return true;
   }
   else if ( nums[rows][cols] > target) {
    cols = cols-1;
   }
   else {
    rows= rows+1;
   }
  }
  return false;
}

int main() {
  int rows , cols;
  cout << "Enter number of rows and columns: ";
  cin >> rows >> cols ;
  vector<vector<int>>nums(rows,vector<int>(cols));
  cout << "Enter the elements of the matrix: ";
  for(int i = 0 ; i < rows ; i++) {
    for(int j = 0 ; j < cols ; j++){
      cin >>nums[i][j];
    }
  }
  cout << "Enter the target element to be searched: ";
  int target ;
  cin >> target ;
  bool ans = searchMatrix(nums,target);
  if ( ans ) {  
    cout << "Element found in the matrix" << endl;
  }
  else {
    cout << "Element not found in the matrix" << endl;
  }
  return 0;
}