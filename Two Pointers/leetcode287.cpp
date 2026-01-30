class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int k = nums.size(); // size of arary
        unordered_map<int,int>map; // store the elements in a map
        for(int i=0 ; i < k ; i++){
           map[nums[i]]++;  // store the freq of each element
        }
        for(auto it : map){  // iterate the map
            if(it.second > 1){  // given , only one element is occuring more than once / duplicacy , so return than element
                return it.first;
            }
        }
        return -1; // if no such element exists , return -1
    }
};

/*
T.C : 0(N+N=2N)
S.C : 0(N)
*/