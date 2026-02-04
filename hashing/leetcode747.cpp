//747. Largest Number At Least Twice of Others

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();  // calc the length of the nums 
        int largest = INT_MIN;  // store the largest 
        int index = 0 ;  // index to store where the largest lies 
        for(int i=0 ; i < n ; i++){   // iterate over the array 
            if(nums[i] > largest){ // calc the largest no in array 
                largest = nums[i];
                index = i;  // update the index to store the largest's index 
            }
        }
        int i=0; // now check the other conditions 
        while(i != n){ // loop condition 
            if(i != index){  // if it the largest element , skip checking 
             if(nums[i] * 2 <= largest){ // else it should be 2*arr[i] <= largest
                i++;  // increment it   
             }
             else{
                return -1; // else return -1 ;
             }
            }
            else{
            i++;  // if its largest element , checking is not done and moved to the next 
            }
        }
        return index; // return index
    }
};
/*
EXPLANATION : T.C : 0(2N)
S.C : 0(1)
/