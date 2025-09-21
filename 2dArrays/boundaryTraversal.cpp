#include <bits/stdc++.h>
using namespace std;

vector<int> boundaryTraversal(vector<vector<int>> mat)
{
  int n = mat.size();
  int m = mat[0].size();
  vector<int> ans;
  int stRow = 0;
  int endRow = n - 1;
  int stCol = 0;
  int endCol = m - 1;
  for (int i = 0; i <= endCol; i++)
  {
    ans.push_back(mat[0][i]);
  }
  for (int j = stRow + 1; j <= endRow; j++)
  {
    ans.push_back(mat[j][endCol]);
  }
  for (int k = endCol - 1; k >= stCol; k--)
  {
    ans.push_back(mat[endRow][k]);
  }
  for (int l = endRow - 1; l >= stRow + 1; l--)
  {
    ans.push_back(mat[l][stCol]);
  }
  return ans;
}

int main()
{
  int rows;
  int cols;
  cout << "Enter number of rows and columns : ";
  cin >> rows >> cols;
  cout << "Enter the elements of the matrix : ";
  vector<vector<int>> nums(rows, vector<int>(cols));
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cin >> nums[i][j];
    }
  }
  vector<int> ans = boundaryTraversal(nums);
  cout << "The boundary traversal is : ";
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  return 0;
}