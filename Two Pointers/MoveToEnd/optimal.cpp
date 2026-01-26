#include <bits/stdc++.h>
using namespace std;

void moveZeroEnd(vector<int>&ans)
{
  int n = ans.size();
  int j = 0;
  for (int i = 0; i < n; i++)
  {
    if (ans[i] != 0)
    {
      ans[j] = ans[i];
      j++;
    }
  }
  while( j < ans.size()){
    ans[j] = 0;
    j++;
  }
}

int main()
{
  vector<int>ans ={1,2,0,4,0,5,3,9,0};
  moveZeroEnd(ans);
  for(int i=0 ; i < ans.size(); i++){
    cout << ans[i] ;
  }
  return 0;
}