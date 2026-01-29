class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();  //  calculate the size of the array
        vector<int>ans;   // vector to store the new squares
        for(int i=0 ; i < n ; i++){   // traverse through the array
            ans.push_back(nums[i]*nums[i]);   // push each square into the array
        }
        sort(ans.begin(),ans.end());   // sort the new array
        return ans;  // return the array
    }
};


/*
Explanation : 
T.C : 0(N) + 0(nlogn)
*/