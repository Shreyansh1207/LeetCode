class Solution {
public:
    static bool cmp(pair<int,string>&p,pair<int,string>&q){
        if(p.first==q.first){
            return p.second<=q.second;
        }
        else{
            return p.first>q.first;
        }
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>mp;
        for(auto i:words){
            mp[i]++;
        }
        vector<pair<int,string>>v;
        for(auto i:mp){
            v.push_back({i.second,i.first});
        }
        sort(v.begin(),v.end(),cmp);
        
        // priority_queue<pair<int,string>,vector<pair<int,string>>>pq;
        // for(auto i:v){
        //     pq.push({i.first,i.second});
        // }
        vector<string>ans;
        // while(!pq.empty()&&k--){
        //     ans.push_back(pq.top().second);
        //     pq.pop();
        // }
        for(auto i:v){
            ans.push_back(i.second);
            k--;
            if(k==0)return ans;
        }
        return ans;
    }
};