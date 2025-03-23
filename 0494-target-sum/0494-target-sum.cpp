class Solution {
public:
    int sum;
    int solve(vector<int>&nums,int cur,int target,vector<vector<int>>&dp){
        if(cur>=nums.size()){
            if(target==0){
                return 1;
            }
            else{
                return 0;
            }
            
        }
        if (target + sum < 0 || target + sum > 2 * sum) {
            return 0; // Boundary check
        }
        if(dp[cur][target+sum]!=-1){
            return dp[cur][target+sum];
        }

        int ch1,ch2;
        ch1=solve(nums,cur+1,target+nums[cur],dp);
        ch2=solve(nums,cur+1,target-nums[cur],dp);
        return dp[cur][target+sum]=(ch1+ch2);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        sum=0;
        for(auto i:nums)sum+=i;
        vector<vector<int>>dp(nums.size(),vector<int>((2*sum)+1, -1));
       

        return solve(nums,0,target,dp);
    }
};