#include <bits/stdc++.h>
using namespace std;

bool twoSum(vector<int> ans, int target)
{
  int n = ans.size();
  sort(ans.begin(), ans.end());
  int i = 0;
  int j = n - 1;
  while (i < j)
  {
    if (ans[i] + ans[j] == target)
    {
      return true;
    }
    else if (ans[i] + ans[j] > target)
    {
      j--;
    }
    else
    {
      i++;
    }
  }
  return false;
}

int main()
{
  int target;
  cout << "Enter target :" << endl;
  cin >> target;
  vector<int> ans = {2, 7, 11, 15};
  if (twoSum(ans, target))
  {
    cout << "TRUE";
  }
  else
  {
    cout << "FALSE";
  }
  return 0;
}


/* 
Optimal Solution : 2 Pointer solution
TC : 0(NlogN)+0(N)  
S.C : 0(1)
*/


