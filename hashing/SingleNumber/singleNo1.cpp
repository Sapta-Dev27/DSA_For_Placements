class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>map;
        for(int i=0 ; i < n ; i++){
            map[nums[i]]++;
        }
        for(auto it : map){
            if(it.second == 1){
                return it.first;
            }
        }
        return -1;
    }
};

/*
explanation : unordered map to store the frequency of the elements and check whose frequency is equal to 1
T.C : 0(2N) && S.C : 0(N)
*/