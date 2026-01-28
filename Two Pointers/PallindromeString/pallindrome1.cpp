class Solution {
  public:
    bool isPalinSent(string &s) {
        // code here
        int n = s.length();
        string res = "";
        for(int i=0 ; i < n ; i++){
            char ch = s[i];
            if ( (ch >='a' && ch <= 'z') || ( ch >='A' && ch <='Z') || ( ch >= '0' && ch <= '9') ){
                res.push_back(tolower(ch));
            }
        }
        int k = res.size();
        int i= 0 , j= k-1 ;
        while( i <= j){
            if(res[i] == res[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};


/*
Explanation : 
1. Remove the alphanumeric numbers ( use the condition to remove)
2. use (toLower) function to conver to lowercase
3. use 2 pointer approach to check if pallindrome
4. T.C : 0(2N) and S.C : 0(1)
*/