class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();  // calculate the length of string
        string res = "";  // empty string to store the resultnt sentence
        string words = "";  //  strings that would store each of the words
        for(int i=0 ; i < n ; i++){  // traverse through the string 
            char ch = s[i];
            if(s[i] != ' '){  // until its a space , push to the "words"
                words.push_back(ch);
            }
            else{  // when it comes to the else block , it means that a space had been detected 
                reverse(words.begin(),words.end());  // reverse that particular word
                res = res + words + ' '; // add it the "res" along with a "space"
                words = ""; // initialize words to be " " , so that it can add  new words
            }
        }
        if(words.length() != 0){  // this checking is done , if the entire traversal is done and there was no space after the last word
        reverse(words.begin(),words.end());  // reverse it
        res = res + words + ' ';  // add it to res
        }
        int k= res.length(); // res length
        return res.substr(0,k-1); // remove the space at the end
    }
};

/*
T.C : 0(N) + 0(nlogn) for reverse
S.C : 0(1)
*/