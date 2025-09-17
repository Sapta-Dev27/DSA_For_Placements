#include <bits/stdc++.h>
using namespace std;

int main()
{
  int rows;
  int cols;
  cout << "Enter number of rows and columns: ";
  cin >> rows >> cols;
  vector<vector<int>> nums(rows, vector<int>(cols));
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cin >> nums[i][j];
    }
  }
  int n = nums.size();
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      swap(nums[i][j], nums[j][i]);
    }
  }
  for (int i = 0; i < n; i++)
  {
    reverse(nums[i].begin(), nums[i].end());
  }
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cout << nums[i][j] << " ";
    }
  }
  return 0;
}