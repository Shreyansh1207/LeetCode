class Solution {
public:
    int maxsub(vector<int>&nums,int n,int i,vector<int>&dp){
	if(i==n) return 0;
	if(dp[i]!=-1) return dp[i];
	int choice1=0,choice2=0;
    choice1 = nums[i] + max(0,maxsub(nums,n,i + 1, dp));
    choice2=nums[i];
	return dp[i]=max(choice1,choice2);
}
    int maxSubArray(vector<int>& nums) {
    int n = nums.size();
        vector<int> dp(n, -1);
        
        int maxSum = INT_MIN;
        for (int i = 0; i < n; ++i) {
            maxSum = max(maxSum, maxsub(nums, n, i, dp));
        }
        
        return maxSum;
    }

        
    
};