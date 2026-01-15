#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &nums)
{
  int n = nums.size();
  stack<int> st;
  vector<int> ans(n);
  for (int i = n - 1; i >= 0; i--)
  {
    while (!st.empty() && nums[i] >= st.top())
    {
      st.pop();
    }
    {
    }
    if (st.empty())
    {
      ans[i] = -1;
    }
    else
    {
      ans[i] = st.top();
    }
    st.push(nums[i]);
  }
  return ans;
}

int main()
{
  vector<int> nums = {4, 12, 5, 3, 1, 2, 5, 3, 1, 2, 4, 6};
  vector<int> result = nextGreaterElement(nums);
  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << " ";
  }
  return 0;
}