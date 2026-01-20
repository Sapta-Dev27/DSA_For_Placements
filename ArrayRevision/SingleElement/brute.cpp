#include <bits/stdc++.h>
using namespace std;

int singleElement(vector<int> arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    int count = 0;
    for (int j = 0; j < arr.size(); j++)
    {
      if (arr[i] == arr[j])
      {
        count++;
      }
    }
    if (count % 2 != 0)
    {
      return arr[i];
    }
  }
  return -1;
}

int main()
{
  vector<int> ans = {1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 2};
  int el = singleElement(ans);
  cout << el << endl;
  return 0;
}

//brute force : 
//T.C:0(N^2)
//S.C:0(1)