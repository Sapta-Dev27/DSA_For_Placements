#include <bits/stdc++.h>
using namespace std;

int main()
{
  int rows;
  int cols;
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
  int st = 0;
  int end = rows - 1;
  while (st < end)
  {
    for (int i = 0; i < cols; i++)
    {
      swap(arr[st][i], arr[end][i]);
    }
    st++;
    end--;
  }
  for (int i = 0; i < rows; i++)
  {
    reverse(arr[i].begin(), arr[i].end());
  }
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}