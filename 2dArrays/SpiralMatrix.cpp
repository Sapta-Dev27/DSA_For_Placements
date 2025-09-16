#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> matrix)
{
  int n = matrix.size();
  int m = matrix[0].size();
  int srow = 0;
  int erow = n - 1;
  int scol = 0;
  int ecol = m - 1;
  vector<int> ans;
  while (srow <= erow && scol <= ecol)
  {
    for (int i = scol; i <= ecol; i++)
    {
      ans.push_back(matrix[srow][i]);
    }
    for (int j = srow + 1; j <= erow; j++)
    {
      ans.push_back(matrix[j][ecol]);
    }
    for (int k = ecol - 1; k >= scol; k--)
    {
      if (srow == erow)
      {
        break;
      }
      ans.push_back(matrix[erow][k]);
    }
    for (int l = erow - 1; l >= srow + 1; l--)
    {
      if (scol == ecol)
      {
        break;
      }
      ans.push_back(matrix[l][scol]);
    }
    srow++;
    scol++;
    erow--;
    ecol--;
  }
  return ans;
}

int main()
{
  int rows, cols;
  cout << "Enter number of rows and columns: ";
  cin >> rows >> cols;
  vector<vector<int>> matrix(rows, vector<int>(cols));
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cin >> matrix[i][j];
    }
  }
  vector<int> result = spiralOrder(matrix);
  cout << "Spiral Order: ";
  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << " ";
  }
  return 0;
}