class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freqMap;
        for(int i=0;i<nums.size();i++){
            freqMap[nums[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto pair:freqMap){
            pq.push({pair.second,pair.first});
        }
        vector<int>result;
        while(k--){
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};
