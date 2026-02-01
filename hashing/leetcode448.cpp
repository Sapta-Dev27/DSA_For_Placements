class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size(); //  nums() size 
        unordered_map<int,int>map; // store the map 
        for(int i=0 ; i < n ; i++){  // traverse through the array
            map[nums[i]]++;  // map into the nums
        }
        vector<int>ans;  // ans 
        for(int i=1; i <=n ; i++){ // [1,8] => if found 
            auto it = map.find(i);  // iterate found  if i
            if(it == map.end()){  // if found
                ans.push_back(i); // push back 
            }
            else{
                continue ; // continue 
            }
        }
        return ans; // return ans 
    }
};

/*
EXPLANTION :
T.C : 0(2N)
S.C : 0(N)
*/