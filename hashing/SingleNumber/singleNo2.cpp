class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>map;
        for(int i=0  ; i < n ; i++){
           map[nums[i]]++;
        }
        vector<int>ans;
        for(auto it : map){
            if(it.second == 1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};


/*Explanation :
use a unordered map to store the elements and its frequency and iterate over the map to check whose freq==1 and push them into the vector 

T.C : 0(2N) && S.C : 0(N)
*/