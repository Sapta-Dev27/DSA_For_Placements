class Solution {
public:
    string reverseByType(string s) {
        int n = s.length(); // length of string
        int i1 =0 , j1 = n-1; // 2 pointers
        while( i1 <= j1){ // while loop condition
            char ch1 = s[i1]; // store the chars
            char ch2 = s[j1];
            if( !(ch1 >= 'a' && ch1 <= 'z') && !(ch2 >= 'a' && ch2 <= 'z') ){ // if both are special chars then move the pointers and swap the chars
                char temp = s[i1];
                s[i1]=s[j1];
                s[j1]=temp;
                i1++;
                j1--;
            }
            else if( (ch1 >= 'a' && ch1 <= 'z') && (ch2 >= 'a' && ch2 <= 'z')){ // if both are non-special chars then only move the pointers
                i1++;
                j1--;
            }
            else{
                if( ch1 >= 'a' && ch1 <= 'z'){ // else if one char is a special char and if other is english char , then move accordingly
                    i1++;
                }
                else{
                    j1--;
                }
            }
        }
        int i2 =0 , j2 = n-1; // 2pointers
        while( i2 <= j2){ // while loop condition
            char ch1 = s[i2];// store the chars
            char ch2 = s[j2];
            if( (ch1 >= 'a' && ch1 <= 'z') && (ch2 >= 'a' && ch2 <= 'z') ){ // if both are non - special chars then move the pointers and swap the chars
                char temp = s[i2];
                s[i2]=s[j2];
                s[j2]=temp;
                i2++;
                j2--;
            }
            else if( !(ch1 >= 'a' && ch1 <= 'z') && !(ch2 >= 'a' && ch2 <= 'z') ){ //if both are special chars then only move the pointers
                i2++;
                j2--;
            }
            else{
                if( !(ch1 >= 'a' && ch1 <= 'z' )){ // else if one char is a special char and if other is english char , then move accordingly
                    i2++;
                }
                else{
                    j2--;
                }
            }
        }
        return s;
    }
};

/*
EXPLANATION : 
T.C : 0(2N)
S.C :0(1)
*/