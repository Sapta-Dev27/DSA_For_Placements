class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
         map<int,int>mp;
         vector<int>ans;
         for(int i= 0 ; i < arr.size() ; i++){
             mp[arr[i]]++;
         }
         for(auto it : mp){
             if(it.second >= 1){
                 ans.push_back(it.first);
             }
         }
         return ans;
    }
};



/*
BRUTE FORCE : 
use a map to store the unique elements 
traverse through the map and put each unqiue element to array

T.C : 0(N) + (nlogn)
S.C : 0(N)

*/