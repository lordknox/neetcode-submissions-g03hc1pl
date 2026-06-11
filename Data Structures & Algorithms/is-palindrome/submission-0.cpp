class Solution {
public:
    bool isPalindrome(string s) {
       string build;
        for(char ch: s){
            if(isalnum(ch)) build += tolower(ch);
        }
        return build == string(build.rbegin(),build.rend());
    }
};
