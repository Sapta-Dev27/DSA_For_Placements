class Solution {
public:
    bool isS(string s , string t){
        int n1 = s.length(); // n1 length 
        int n2 = t.length(); // n2 length 
            int i= 0; // move the pointers 
            int j= 0; // move the pointers 
            unordered_map<char,char>map; // store in map 
            while( i< n1 && j < n2){ // loop condition 
             if(map.size() !=0){ // if size() not equal to zero 
               auto it = map.find(s[i]); // find the element
               if(it != map.end()){ // if found 
                 if(it -> second != t[j]){ // check if equal to the t[j]
                  return false;// if  false 
                 }
               }
             }
             map[s[i]]=t[j]; //push to map 
             i++;// move 
             j++;
            }
            return true;
    }
    bool isT(string s , string t){ // same as above 
          int n1 = s.length();
        int n2 = t.length();
            int i= 0;
            int j= 0;
            unordered_map<char,char>map;
            while( i< n1 && j < n2){
             if(map.size() !=0){
               auto it = map.find(t[i]);
               if(it != map.end()){
                 if(it -> second != s[j]){
                  return false;
                 }
               }
             }
             map[t[i]]=s[j];
             i++;
             j++;
            }
            return true;
    }
    bool isIsomorphic(string s, string t) { // main function 
        int n1 = s.length();
        int n2 = t.length();
        if(n1 != n2){ // if length are not equal , then return false 
            return false;
        }
        else{
            if( isS(s,t)  && isT(s,t)){  // if both are true 
                return true ;
            } // return false 
            else{
                return false;
            }
        }
    }
};