class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();  // size of array 
        unordered_map<int,int>map;  // map to store the elements 
        map[nums[0]]=0;  // at first insert arr[0] to map
        for(int i=1 ; i < n ; i++){ // traverse the map from 1 to N-1
           auto it = map.find(nums[i]); //  at first find if arr[i] is present in map n
           if( it != map.end()){  // check so  , if present 
            if(abs(it->second - i) <= k){    // then find the absolute value : abs(i-j)
                return true;  // if <=k , then return true 
            }
            else{ // else if not so , then push into the map 
                map[nums[i]]=i;
            }
           }
           else{
            map[nums[i]]=i; // else if not so , then push into the map 
           }
        }
        return false; // return false
    }
};

/*
Explanation :
T.C : 0(N)
S.C : 0(N)
*/