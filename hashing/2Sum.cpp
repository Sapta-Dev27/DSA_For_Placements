#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> nums, int target)
{
  int n = nums.size();
  unordered_map<int, int> m;
  vector<int> ans;
  for (int i = 0; i < n; i++)
  {
    int first = nums[i];
    int second = target - first;
    if (m.find(second) != m.end())
    {
      ans.push_back(i);
      ans.push_back(m[second]);
    }
    else
    {
      m[first] = i;
    }
  }
  return ans;
}

int main()
{
  int n;
  cout << "Enter the size of array : ";
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the elements of array : ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int target;
  cout << "Enter the target sum : ";
  cin >> target;
  vector<int> ans = twoSum(arr, target);
  int m = ans.size();
  for (int i = 0; i < m; i++)
  {
    cout << ans[i] << " ";
  }
  return 0;
}