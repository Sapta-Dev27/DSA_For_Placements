// 349. Intersection of Two Arrays

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();  // size1 
        int n2 = nums2.size();  // size2 
        unordered_map<int,int>map1;  // store into map1 
        unordered_map<int,int>map2;   // store into map2 
        for(int i=0 ; i < n1 ; i++){
         map1[nums1[i]]++;  // iterate over arr1 and store its frq to map1 
        }
        for(int i=0 ; i < n2 ; i++){
         map2[nums2[i]]++;  // iterate over arr2 and store its frq to map2
        }
        vector<int>ans; // vector ans 
        for(auto it1 : map2){  // iterate over the map2 
            auto it2 = map1.find(it1.first);  // check if each element of map2 is present in the map1 
            if(it2 != map1.end()){  // if so , then its a intersection 
                ans.push_back(it1.first);  // push to array 
            }
        }
        return ans;  // return ans
    }
};

/*
EXPLANATION :
T.C :0(3N)
SC :0(2N)
*/