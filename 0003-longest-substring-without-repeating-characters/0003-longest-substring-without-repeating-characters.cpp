class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int maxlength=0;
        unordered_map<int,int>mp;
        for(int j=i;j<s.size();j++){
            if(mp.find(s[j])!=mp.end()){
                i=max(i,mp[s[j]]+1);
            }
            mp[s[j]] = j;
            maxlength=max(maxlength,j-i+1);
        }
        return maxlength;
    }
};