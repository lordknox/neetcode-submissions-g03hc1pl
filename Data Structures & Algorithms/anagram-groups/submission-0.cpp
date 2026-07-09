class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string, vector<string>> list;
      for(string s: strs){
        string key = s;
        sort(key.begin(),key.end());
        list[key].push_back(s);
      }  
      vector<vector<string>> ans;
      for(auto &it : list){
        ans.push_back(it.second);
      }
      return ans;
    }
};
