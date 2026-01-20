// OPTIMAL SOLUTION WOULD BE USING THE DUTCH NATIONAL FLAG ALGORITHM

#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> ans)
{
  int n = ans.size();
  int count = 0;
  int el = 0;
  for (int i = 0; i < n; i++)
  {
    if (count == 0)
    {
      el = ans[i];
      count = 1;
    }
    else if (el == ans[i])
    {
      count++;
    }
    else
    {
      count--;
    }
  }
  int c = 0;
  for (int i = 0; i < n; i++)
  {
    if (ans[i] == el)
    {
      c++;
    }
  }
  if (c > (n / 2))
  {
    return el;
  }
  else {
    return -1;
  }
}

int main()
{
  vector<int> ans = {1, 2, 3, 2, 2, 1, 2, 3, 2, 2};
  int majority = majorityElement(ans);
  cout << majority << endl;
  return 0;
}


// Optimal SOLUTION : T.C : 0(N) S.C : 0(1)