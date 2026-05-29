class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> smp;
        unordered_map<char,int> tmp;
        for(char ch: s){
            smp[ch]++;
        }
        for(char ch:t){
            tmp[ch]++;
        }
        return smp==tmp;
    }
};
