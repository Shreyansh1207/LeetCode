class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.size()<10)return {};
        map<string,int>mp;
        vector<string>ans;
        for(int i=0;i<s.size()-9;i++){
            auto cur=s.substr(i,10);
            if(mp.find(cur)!=mp.end()&&mp[cur]==1)ans.push_back(cur);
            mp[cur]++;
        }return ans;
    }
};