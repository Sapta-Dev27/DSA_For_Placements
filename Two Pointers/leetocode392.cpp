class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.length(); // length of string1
        int m = t.length(); //  length of string2
        int i=0 , j=0 ; // 2 pointer approach
        while(i < n && j < m){  // while loop condition 
            if(s[i] == t[j]){  // check both of them 
                i++;  // move them  if euqal 
                j++;
            }
            else{
                j++; // if not , move the j pointer to check if the next char is equal as s it a subsequence of t
            }
        }
        if(i==n){ // if so , then the i pointer would have traversed the entire string
            return true;
        }
        else{
            return false; // if not , return false 
        }
    }
};


/*
T.C : 0(N)
S.C : 0(1)
*/