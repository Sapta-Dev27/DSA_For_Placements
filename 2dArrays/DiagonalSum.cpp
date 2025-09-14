#include <bits/stdc++.h>
using namespace std;

int diagonaSum(vector<vector<int>> arr, int rows, int cols)
{
  int sum = 0;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if ((i == j) || (i + j == rows - 1))
      {
        sum = sum + arr[i][j];
      }
    }
  }
  return sum;
}

int main()
{
  int rows, cols;
  cout << "Enter number of rows and columns: ";
  cin >> rows >> cols;
  vector<vector<int>> arr(rows, vector<int>(cols));
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cin >> arr[i][j];
    }
  }
  int sum = diagonaSum(arr, rows, cols);
  cout << "Sum of Diagonal elements is: " << sum << endl;
  return 0;
}