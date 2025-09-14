#include <bits/stdc++.h>
using namespace std;

int findMaxRowSum(vector<vector<int>> arr, int rows, int cols)
{
  int maxSum = INT_MIN;
  for (int i = 0; i < rows; i++)
  {
    int sum = 0;
    for (int j = 0; j < cols; j++)
    {
      sum = sum + arr[i][j];
    }
    maxSum = max(maxSum, sum);
  }
  return maxSum;
}

int main()
{
  int rows;
  int cols;
  cout << "Enter number of rows and columns: ";
  cin >> rows >> cols;
  vector<vector<int>> arr;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cin >> arr[i][j];
    }
  }
  int maxRowSum = findMaxRowSum(arr, rows, cols);
  cout << "Maximum row sum is: " << maxRowSum << endl;
  return 0;
}