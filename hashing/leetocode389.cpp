class Solution {
public:
    char findTheDifference(string s, string t) {
        int n1 = s.length();   // string s length 
        int n2 = t.length();  // string t length 
        unordered_map<char,int>map1;  // map1 store the element 
        unordered_map<char,int>map2;  // map2 store the element 
        for(int i=0 ; i < n1 ; i++){
          map1[s[i]]++;  // store the elements into the map 
        }
        for(int i=0 ; i< n2 ; i++){
           map2[t[i]]++;  // store the elements into the map
        } 
        for(auto it1 : map2){  // iterate over the map 
           auto it2 = map1.find(it1.first);  // find it into the map
           if(it2 != map2.end()){  // if found 
            if(it2->second==it1.second){  // if freq equal then continue 
                continue;
            }
            else{
                return it1.first;  // return it.first 
            }
           }
           else{
            return it1.first;  // return it.first 
           }
        }
        return -1;
    }
};

/*
EXPLANATION : 
T.C : 0(3N)
S.C : 0(1) as  0(26) = constant  
*/