class Solution {
public:
    bool solve(int i,vector<int>&nums,vector<vector<int>>&dp,int tsum){
        if (tsum == 0) return true;
        if (i >= nums.size() || tsum < 0) return false;
        if (dp[i][tsum] != -1) return dp[i][tsum];
        bool skip,take;
        skip=solve(i+1,nums,dp,tsum);
        take=solve(i+1,nums,dp,tsum-nums[i]);
        return dp[i][tsum] = skip||take;
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto it:nums){
            sum+=it;
        }
        if(sum%2!=0) return false;
        int tsum=sum/2;
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(tsum+1,-1));
        return solve(0,nums,dp,tsum);
    }
};