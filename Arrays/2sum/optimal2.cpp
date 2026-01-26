#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> ans, int target)
{
  int n = ans.size();
  vector<pair<int, int>> v;
  for (int i = 0; i < n; i++)
  {
    v.push_back({ans[i], i});
  }
  sort(v.begin(), v.end());
  int i = 0;
  int j = n - 1;
  while (i < j)
  {
    if (v[i].first + v[j].first == target)
    {
      return {v[i].second, v[j].second};
    }
    else if (v[i].first + v[j].first > target)
    {
      j--;
    }
    else
    {
      i++;
    }
  }
  return {-1,-1};
}

int main()
{
  int target;
  cout << "Enter target :" << endl;
  cin >> target;
  vector<int> ans = {11,2,15,7};
  vector<int> res = twoSum(ans, target);
  for (int i = 0; i < res.size(); i++)
  {
    cout << res[i] << endl;
  }
  return 0;
}

/*
Store value + index before sorting
T.C : 0(n)+ 0(nlgn) + 0(n)
S.C : 0(1)
*/