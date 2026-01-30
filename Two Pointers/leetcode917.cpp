class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n = s.length();  // calc the length of str1 
        int i = 0 ;   // 2 pointer approach , initialize them 
        int j = n-1 ;
        while( i <= j){  // while loop condition
            char ch1 = s[i];   // store the elements
            char ch2 = s[j];
            if( (( ch1 >= 'a' && ch1 <= 'z') || ( ch1 >= 'A' && ch1 <='Z'))  &&    
                (( ch2 >= 'a' && ch2 <= 'z') || ( ch2 >= 'A' && ch2 <='Z'))  ){  // check if both s[i] & s[j] are letters
                    char temp = s[i] ;  // if they are letters , then swap them 
                    s[i]=s[j];
                    s[j]=temp;
                    i++ ;   // move the pointers
                    j--;
            }
            else if( ! (( ch1 >= 'a' && ch1 <= 'z') || ( ch1 >= 'A' && ch1 <='Z')) ){  // if s[i] is not a letter
                i++;  //move the i pointer
            }
            else {  // if s[j] is not a letter
                j--;  // move the j pointer
            }
        }
        return s;  // return the s
    }
};

/*
T.C : 0(N)
S.C :0(1)
*/