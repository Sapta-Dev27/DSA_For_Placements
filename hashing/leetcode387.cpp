class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();  // size of the string 
        unordered_map<int,int>map;  // store into the map
        for(int i =0 ; i < n ; i++){  // traverse through the array
            char ch = s[i];  // push into the map 
            map[ch]++;
        }
        for(int i=0 ; i < n ; i++){  // traverse through the array
            char ch = s[i];  // store the map
            auto it = map.find(ch); // iterate through the map and find
            if( it != map.end()){  // if found 
                if(it->second == 1){  // check if == 1
                    return i;  // return i 
                }
            }
        }
        return -1;
    }
};

/*
EXPLANATION :
T.C :0(2N)
S.C : 0(N)
*/