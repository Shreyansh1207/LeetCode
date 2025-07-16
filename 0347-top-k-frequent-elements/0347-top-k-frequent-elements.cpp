class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        typedef pair<int,int>p;
        unordered_map<int,int>mp;
        for(auto &it:nums){
            mp[it]++;
        }
        priority_queue<p,vector<p>>pq;
        for(auto it:mp){
            int value=it.first;
            int freq=it.second;
            pq.push({freq,value});
        }
        vector<int>ans;
        while(k){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;
    }
};