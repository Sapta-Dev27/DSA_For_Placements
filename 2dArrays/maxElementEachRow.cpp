#include <bits/stdc++.h>
using namespace std;

vector<int> maxElementEachRow(vector<vector<int>> nums)
{
  int n = nums.size();
  int m = nums[0].size();
  vector<int> ans;
  for (int i = 0; i < n; i++)
  {
    sort(nums[i].begin(), nums[i].end());
    ans.push_back(nums[i][m - 1]);
  }
  return ans;
}

int main()
{
  int rows;
  int cols;
  cin >> rows >> cols;
  cout << "Enter the elements of the array: " << endl;
  vector<vector<int>> nums(rows, vector<int>(cols));
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cin >> nums[i][j];
    }
  }
  vector<int> result = maxElementEachRow(nums);
  cout << "The maximum element of each row is: " << endl;
  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << " ";
  }
  return 0;
}