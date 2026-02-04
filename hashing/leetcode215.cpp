// Kth Largest Element in an Array

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end()); // sprt the array at first 
        return nums[nums.size()-k];  // return : length - kth index 
    }
};

/*
T.C : 0(nlogn)
S.C : 0(1)
*/