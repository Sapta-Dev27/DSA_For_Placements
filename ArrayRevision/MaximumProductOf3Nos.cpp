/*
Array Consists of both positive and negative elements
Product of 3 nos would be maximum : 
1. sort the array 
2. return the product of 3 elements at indices n-1,n-2,n-3
3. or return the product of the smallest 2 nos (0,1) and at the max (n-1) index
*/

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
       int n = nums.size();
       sort(nums.begin() ,nums.end());
       int ans1 = nums[n-1]*nums[n-2]*nums[n-3];
       int ans2 = nums[0]*nums[1]*nums[n-1];
       return max(ans1,ans2);
    }
};