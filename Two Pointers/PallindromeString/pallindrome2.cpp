class Solution {
public:
    bool checkPalli(string s, int l , int r){
        while(l <= r){ // base condition
            if(s[l] != s[r]){  // check if not valid 
                return false;
            }
            else{
                l++; // otherwise move the pointers
                r--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n = s.length(); // calculate length of string
        int i=0; // 1st pointer
        int j=n-1; // 2nd pointer
        while(i<=j){ // base condition
            if(s[i] != s[j]){  // if not equal , then you can at max delete one element , so move the pointer either left / right 
              return checkPalli(s,i+1,j) || checkPalli(s,i,j-1); // XOR operation
            }
            else{
                i++; // increment 1st pointer
                j--; // decrement 2nd pointer
            }
        }
        return true;
    }
};


/*
Explanation : 
XOR Pointer :   return checkPalli(s,i+1,j) || checkPalli(s,i,j-1); 
if (s,i+1,j) =>move the left pointer 
if  checkPalli(s,i,j-1) => move the right pointer 

if  checkPalli(s,i+1,j) => return true then dont check the other   checkPalli(s,i,j-1)
if  checkPalli(s,i+1,j-1) => return false then check the other  checkPalli(s,i,j-1)  => if it returns true then return true as the final answer or if it returns false then return false as the main answer
*/