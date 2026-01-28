class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size();  // calculate the vector size
        int longest = 0;  // initialize the longest at first to be zero
        int count = 1 ;  // start the counter with 1 
        for(int i=0 ; i < n-1 ; i++){
            if(nums[i] < nums[i+1]){  // if it is increasing 
                longest = max(longest , count);  // the update the longest and check if it is greater than the prev longest
                count++; // increment the count            }
            else{
                count = 1;  // if the comparison is not satisfied then again start the counter from 1
            }
        }
        return 1+ longest ;
    }
};

/*
Explanation :
T.C : 0(n)
S.C : 0(1)
*/