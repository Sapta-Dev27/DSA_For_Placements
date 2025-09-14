#include <bits/stdc++.h>
using namespace std;

bool ifPresent(int arr[][100], int rows, int cols, int target)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (arr[i][j] == target)
      {
        return true;
      }
    }
  }
  return false;
}

int main()
{
  int rows;
  int cols;
  cout << "Enter no of the rows " << endl;
  cin >> rows;
  cout << "Enter no of the columns " << endl;
  cin >> cols;
  int arr[rows][cols];
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
  if (ifPresent(arr, rows, cols, target))
  {
    cout << "Element found" << endl;
  }
  else
  {
    cout << "Element not found" << endl;
  }
  return 0;
}