class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        // for(int it:nums){
        //     if (mp.find(it) != mp.end()){
        //         mp[it]=nums[it];
        //     }
        //     else{
        //         return true;
        //     }
        // }
        // return false;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==1){
                return true;
            }
            else{
                mp[nums[i]] = 1;
            }
        }

        return false;
    }
};