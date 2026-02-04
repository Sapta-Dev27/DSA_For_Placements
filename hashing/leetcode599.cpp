//599. Minimum Index Sum of Two Lists
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int n1 = list1.size();  // size1 
        int n2 = list2.size();  // size2 
        unordered_map<string,int>map; // map th elements of list1
        for(int i=0 ; i < n1 ; i++){
            map[list1[i]]=i; // as per indices 
        }
        int index = 0; // index 
        int miniIndex = INT_MAX; // min Index 
        vector<pair<string,int>>store;  // pair format <string and its index > from map 
        for(int i=0 ; i< n2 ; i++){  // iterate over the list2 
            auto it = map.find(list2[i]); // search if present in the map1 
            if(it != map.end()){ // if so 
              index = it->second + i; // calc the index 
              miniIndex = min(miniIndex,index); // check the minimum one and update accordingly
              store.push_back({it->first,index}); // push back into the array its index and the string 
            }
        }
        int k = store.size(); // the size 
        vector<string>ans; //the ans 
        for(int i=0 ; i < k ; i++){  // iterate over it 
            if(store[i].second==miniIndex){  // the cases where the s[i].second == miniIndex , push into  ans 
                ans.push_back(store[i].first);
            }
        }
        return ans; // return it 
    }
};
/*
EXPLANATION : 
T.C : 0(2N)
S.C : 0(2N)
*/