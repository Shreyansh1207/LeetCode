class Solution {
public:
    int solve(int n,int cur,vector<int>&dp){
        if(cur==n)return 1;
        if(cur>n)return 0;
        if(dp[cur]!=-1){
            return dp[cur];
        }
        int choice1,choice2;
        choice1=solve(n,cur+1,dp);
        choice2=solve(n,cur+2,dp);
        return dp[cur]=choice1+choice2;
    }
    int climbStairs(int n) {
        vector<int>dp(n,-1);
        return solve(n,0,dp);
    }
};