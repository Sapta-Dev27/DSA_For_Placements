#include <bits/stdc++.h>
using namespace std;

pair<int, int> returnIndex(vector<vector<int>> arr, int rows, int cols, int target)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (arr[i][j] == target)
      {
        return {i, j};
      }
    }
  }
  return {-1, -1};
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
  cout << "Enter the element to be searched " << endl;
  int target;
  cin >> target;
  pair<int, int> ans = returnIndex(arr, rows, cols, target);
  if (ans.first == -1 && ans.second == -1)
  {
    cout << "Element not found" << endl;
  }
  else
  {
    int r= ans.first;
    int c = ans.second;
    cout << "Element found at index: " << r << ", " << c << endl;
  }
  return 0;
}