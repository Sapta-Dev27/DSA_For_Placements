class Solution {
public:
    bool isPalli(string s){
        int n = s.length(); // length of substring 
        int i=0 , j= n-1 ;  // 2 pointer approach 
        while(i <= j){  // while loop condition 
            if(s[i] == s[j]){  // check if equal
                i++;  // move the pointers then
                j--;
            }
            else{ // else false 
                return false;
            }
        }
        return true;
    }
    int countSubstrings(string s) {
        int n = s.length(); // actual string length
        int count =0 ; // counts no of valid pallindrome substrings 
        for(int i=0 ; i < n ; i++){ // traverses over the strings
            for(int j= i ; j < n ; j++){
                string str1 = s.substr(i, j-i+1); // function that extracts the substrings
                if(isPalli(str1)){ // if they are a valid pallindrome
                    count++; // increase the counter
                }
            }
        }
        return count;// return the count
    }
};