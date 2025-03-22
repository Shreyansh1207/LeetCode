class Solution {
public:
    int solve(vector<int>nums,int cur,vector<int>&dp){
        
        if(cur>nums.size()-1){
            return 0;
        }
        if(dp[cur]!=-1){
            return dp[cur];
        }
        int choice1,choice2;
        choice1=solve(nums,cur+2,dp);
        choice2=solve(nums,cur+3,dp);
        return dp[cur]=nums[cur]+max(choice1,choice2);
    }
    int rob(vector<int>& nums) {
        if(nums.size()==0)return 0;
        if(nums.size()-1==1){
            return max(nums[0],nums[1]);
        }
        vector<int>dp(nums.size(),-1);
        return max(solve(nums,0,dp),solve(nums,1,dp));
    }
};