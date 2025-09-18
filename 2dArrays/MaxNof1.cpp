#include <bits/stdc++.h>
using namespace std;

int indexMaxNoofOne(vector<vector<int>> nums)
{
  int n = nums.size();
  int m = nums[0].size();
  int maxCount = INT_MIN;
  int index = 0;
  for (int i = 0; i < n; i++)
  {
    int count = 0;
    for (int j = 0; j < m; j++)
    {
      if (nums[i][j] == 1)
      {
        count++;
      }
    }
    if (count > maxCount)
    {
      maxCount = count;
      index = i;
    }
  }
  if (maxCount == 0)
  {
    return -1;
  }
  else
  {
    return index;
  }
}

int main()
{
  int rows;
  int cols;
  cout << "Enter number of rows and columns: ";
  cin >> rows >> cols;
  vector<vector<int>> nums(rows, vector<int>(cols));
  cout << "Enter the elements of the array:";
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cin >> nums[i][j];
    }
  }
  int index = indexMaxNoofOne(nums);
  if (index == -1)
  {
    cout << "No 1's are present in the array" << endl;
  }
  else
  {
    cout << "Row with maximum number of 1's is: " << index << endl;
  }
}