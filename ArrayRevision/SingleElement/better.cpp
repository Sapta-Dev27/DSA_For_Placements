#include <bits/stdc++.h>
using namespace std;

int singleElement(vector<int> arr)
{
  int n = arr.size();
  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++)
  {
    mp[arr[i]]++;
  }
  for (auto it : mp)
  {
    if (it.second == 1)
    {
      return it.first;
    }
  }
  return -1;
}

int main()
{
  vector<int> ans = {1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 5};
  int el = singleElement(ans);
  cout << el << endl;
  return 0;
}

// Better solution would be using an unordered_map
// T.C : 0(N)
//S.C : 0 (N) 
// but it ends up taking a o(n) SC