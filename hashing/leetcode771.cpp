//771. Jewels and Stones

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n1 = stones.length();  // length 1 
        int n2 = jewels.length();  // length 2 
        unordered_map<char,int>map;  // store into the map 
        for(int i=0 ; i < n1 ; i++){  // iterate over the map 
            char ch = stones[i];  // store the chars into the map with its frequency
            map[ch]++;
        }
        int count = 0;  // count == 0 
        for(int i=0 ; i < n2 ; i++){  // iterate over the other strin
            auto it = map.find(jewels[i]);  // check if s[i] is present in the map 
            if(it != map.end()){  // if so , then add its frq to total frq
             count = count + it->second;
            }
        }
        return count;  // return the count 
    }
};

/*
EXPLANTION :
T.C : 0(2N)
S.C :0(N)
*/
