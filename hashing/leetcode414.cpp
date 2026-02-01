class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size(); // size of the array
        map<int,int>mp; // store into map 
        for(int i=0 ; i < n ; i++){ // traverse through the array 
         mp[nums[i]]++;  // map into store 
        }
        int size = mp.size(); // size of map 
        vector<int>ans; //  ans  array 
        if(size >= 3){  // if size >=3 
          for(auto it : mp){ // iterate map 
            ans.push_back(it.first); // push into the array 
          }
          int n = ans.size(); // size 
          return ans[n-3]; // return index
        }
        else {
         for(auto it : mp){ // inerate through the map 
            ans.push_back(it.first); // push into array 
         }
         return ans[ans.size()-1]; // return the max 
        }
    }
};