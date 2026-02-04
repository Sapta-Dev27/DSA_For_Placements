// 350. Intersection of Two Arrays2 

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(); // size1 calc 
        int n2 = nums2.size();  // size2 calc 
        unordered_map<int,int>map1 ;  // map1 
        unordered_map<int,int>map2 ;  // map2 
        for(int i= 0 ; i < n1 ; i++){  
            map1[nums1[i]]++;  // store into map1 
        }
        for(int i= 0 ; i < n2 ; i++){
            map2[nums2[i]]++;  // store into map2
        }
        vector<int>ans;  // ans 
        for(auto it1 : map2){  // iterate over the map2
            auto it2 = map1.find(it1.first);  // check if the it.first is present in map1
            if(it2 != map1.end()){  // if so 
                int mini = min(it1.second,it2->second); // calc the minimum frq of the element in both arrays
                for(int i=0 ; i < mini ; i++){  // push into the array minimum times
                    ans.push_back(it1.first);
                }
            }
        }
        return ans;// return ans
    }
};

/*
EXPLANATION :
T.C : 0(3N)
S.C : 0 (2N)
*/