#include <bits/stdc++.h>
using namespace std;


int majorityElement(vector<int>ans){
  int n= ans.size();
  unordered_map<int,int>mp;
  for(int i=0 ; i<n ; i++){
    mp[ans[i]]++;
  }
  int check = n/2;
  for(auto it : mp){
    if(it.second > check){
      return it.first;
    }
  }
  return -1;
}

int main()
{
  vector<int> ans = {1, 2, 3, 2, 2, 1, 2, 3, 2, 2};
  int majority = majorityElement(ans);
  cout << majority << endl;
  return 0;
}

// OPTIMAL SOLUTION : T.C:0(2N) , SC : 0(1)