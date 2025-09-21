#include <bits/stdc++.h>
using namespace std;

int countSortedRows(vector<vector<int>> arr)
{
  int rows = arr.size();
  int cols = arr[0].size();
  int count = 0;
  for (int i = 0; i < rows; i++)
  {
    bool inc = true;
    bool dec = true;
    for (int j = 0; j < cols - 1; j++)
    {
      if (arr[i][j] > arr[i][j + 1])
      {
        inc = false;
      }
      if (arr[i][j] < arr[i][j + 1])
      {
        dec = false;
      }
    }
    if (inc || dec)
    {
      count++;
    }
  }
  return count;
}

int main()
{
  int cols;
  int rows;
  cout << "Enter number of rows and columns: ";
  cin >> rows >> cols;
  vector<vector<int>> arr(rows, vector<int>(cols));
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cin >> arr[i][j];
    }
  }
  int result = countSortedRows(arr);
  cout << "Number of sorted rows: " << result << endl;
  return 0;
}