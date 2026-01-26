#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> ans, int target)
{
  int n = ans.size();
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (ans[i] + ans[j] == target)
      {
        return {i, j};
      }
    }
  }
  return {-1, -1};
}

int main()
{
  int target;
  cout << "Enter target :" << endl;
  cin >> target;
  vector<int> ans = {2, 7, 11, 15};
  vector<int> res = twoSum(ans, target);
  for (int i = 0; i < res.size(); i++)
  {
    cout << res[i] << endl;
  }
  return 0;
}


/* 
Brute Force Solution : T.C : 0(n2) , S.C : 0(1)
*/