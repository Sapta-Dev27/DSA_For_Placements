#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> ans, int target)
{
  int n = ans.size();
  map<int, int> mp; // uses map to store the elements and their indices
  for (int i = 0; i < n; i++)
  {
    int curr = ans[i]; // curr element
    int more = target - curr; // more = target - curr -> element to be seached if present in map
    if (mp.find(more) != mp.end())  //mp.find() iterates over the entire map and see if present  or not , if not present it reaches map.end()
    {
      return {mp[more], i};  // if present return the index of map[more] and current index in loop 
    }
    mp[curr] = i;   // if not present add the curr to the map and its index 
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
Better Solution : T.C : 0(N*nlogn) , S.C : 0(N) -> for map
*/