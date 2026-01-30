class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n1 = s.length();  // calc length of 's' string
        int n2 = t.length();  // calc length of 't' string
        string str1 = "";   // initialize 2 empty strings to store the results
        string str2 = "";
        for(int i=0 ; i< n1 ; i++ ){  // traverse through the 1st string 
            char ch = s[i];
            if(ch != '#'){    // if is ch != # , then push it into the new string
                str1.push_back(ch);
            }
            else{
                if( str1.length() == 0){  // edge case to check , if the string is empty , then you cant pop out , so continue
                    continue;
                }
                str1.pop_back();  // but if ch == # , then pop the previous element out 
            }
        }
        for(int i=0 ; i < n2 ; i++){   // here same for the next string
            char ch = t[i];
            if( ch != '#'){
                str2.push_back(ch);
            }
            else {
                if( str2.length() == 0){
                    continue;
                }
                str2.pop_back();
            }
        }
        return str1 == str2 ;  // if both str1 , str2 are equal , then return true , otherwise return false 
    }
};


/*
EXPLANATION : 
T.C : 0(N) + 0(M)
S.C : 0 (1)
*/