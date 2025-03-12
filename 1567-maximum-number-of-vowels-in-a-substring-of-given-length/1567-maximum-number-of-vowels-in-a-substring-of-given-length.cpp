class Solution {
public:
    bool vowel(char ch){
        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }
    int check(map<char,int>&mp){
        int ans=0;
        for(auto i:mp){
            auto ch=i.first;
            auto freq=i.second;
            if(vowel(ch))ans+=freq;
        }return ans;
    }
    int maxVowels(string s, int k) {
        map<char,int>mp;
        int i=0,j=0;
        int ans=0;
        while(j<s.size()){
            mp[s[j]]++;

            if(j-i+1==k){
                auto curans=check(mp);
                ans=max(ans,curans);
                mp[s[i]]--;
                i++;
            }j++;
        }return ans;
    }
};