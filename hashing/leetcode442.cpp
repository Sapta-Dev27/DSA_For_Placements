//Find All Duplicates in an Array

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size(); // size of an array 
        unordered_map<int,int>map;   // map to store the elements 
        for(int i=0 ; i < n ; i++){  // iterate over the array 
            map[nums[i]]++;  // map each element 
        }
        vector<int>ans;  // ans array to store it 
        for(auto it : map){  // iterate over the map 
            if(it.second==2){  // if frq == 2 
                ans.push_back(it.first);  // push it into the ans
            }
        }
        return ans;  // return it 
    }
};