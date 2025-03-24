class Solution {
public:
    int solve(string &s,int i,int j,vector<vector<int>>&dp){
        if(i>=j){
            return 1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s[i]==s[j]){
            return solve(s,i+1,j-1,dp);
        }
        return dp[i][j]=0;
    }
    int countSubstrings(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int count=0;
        vector<vector<int>>dp(1001,vector<int>(1001,-1));
        for (int i = 0; i < s.size(); i++) {
            for (int j = i; j < s.size(); j++) {
                if (solve(s, i, j,dp) == true) {
                    count++;
                }
            }
        }
        return count;
    }
};