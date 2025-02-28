class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        for(auto i:s)mp[i]++;
        priority_queue<pair<int,char>,vector<pair<int,char>>>pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        string ans="";
        while(!pq.empty()){
            for(int i=pq.top().first;i>=1;i--){
                ans.push_back(pq.top().second);
            }

            pq.pop();
            
        }
        return ans;
        
    }
};