#include <bits/stdc++.h>
using namespace std;

int maxColSum(vector<vector<int>> arr, int rows, int cols)
{
  int maxSum = INT_MIN;
  for (int j = 0; j < cols; j++)
  {
    int sum = 0;
    for (int i = 0; i < rows; i++)
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
  cin >> rows;
  cin >> cols;
  vector<vector<int>> arr(rows, vector<int>(cols));
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cin >> arr[i][j];
    }
  }
  int maxSum = maxColSum(arr, rows, cols);
  cout << "Maximum column sum is: " << maxSum << endl;
  return 0;
}