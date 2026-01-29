class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
      int n = nums.size();  // calculate the size of the array
      unordered_map<int,int>map; // unordered map to store the elements
      for(int i=0 ; i < n ; i++){   //  traverse through the array
        map[nums[i]]++;    // map each element of array
      }
      int sum= 0;
      for(auto it : map){   // traverse through the map
        if(it.second == 1){   // check if the it.second => freq = 1
            sum = sum + it.first; // if so , then add it to sum
        }
      }
      return sum ;  // return the sum
    }
};


/*
Explanation :
T.C : 0(N) + 0(N)
S.C : 0(N)
*/