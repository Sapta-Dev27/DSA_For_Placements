#include <bits/stdc++.h>
using namespace std;

bool searchInRow(vector<vector<int>> nums, int target, int row)
{
  int n = nums.size();
  int m = nums[0].size();
  int start = 0;
  int end = m - 1;
  while (start <= end)
  {
    int mid = (start + end) / 2;
    if (nums[row][mid] == target)
    {
      return true;
    }
    else if (nums[row][mid] > target)
    {
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }
  return false;
}

bool searchMatrix(vector<vector<int>> nums, int target)
{
  int n = nums.size();
  int m = nums[0].size();
  int startRow = 0;
  int endRow = n - 1;
  while (startRow <= endRow)
  {
    int midRow = startRow + (endRow - startRow) / 2;
    if (nums[midRow][0] <= target && nums[midRow][m - 1] >= target)
    {
      return searchInRow(nums, target, midRow);
    }
    else if (nums[midRow][0] >= target)
    {
      endRow = midRow - 1;
    }
    else
    {
      startRow = midRow + 1;
    }
  }
  return false;
}

int main()
{
  int rows, cols;
  cout << "Enter number of rows and columns: ";
  cin >> rows >> cols;
  vector<vector<int>> nums(rows, vector<int>(cols));
  cout << "Enter the elements of the matrix: ";
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cin >> nums[i][j];
    }
  }
  cout << "Enter the target element: ";
  int target;
  cin >> target;
  bool ans = searchMatrix(nums, target);
  cout << (ans ? "Element found" : "Element not found") << endl;
  return 0;
}