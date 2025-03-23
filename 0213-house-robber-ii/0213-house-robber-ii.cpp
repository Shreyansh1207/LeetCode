class Solution {
public:
    
    int solve(vector<int>& nums, int cur, int end, vector<int>& dp) {
        if (cur>=end) {
            return 0;
        }
        if (dp[cur] != -1) {
            return dp[cur];
        }
        int ch1 = solve(nums, cur + 2, end, dp);
        int ch2 = solve(nums, cur + 1, end, dp);
        return dp[cur] = max(ch1+nums[cur], ch2);
    }

    int rob(vector<int>& nums) {
        if (nums.empty()) return 0;
        if (nums.size() == 1) return nums[0];
        if (nums.size() == 2) return max(nums[0], nums[1]);

        vector<int> dp1(nums.size()+1, -1);
        vector<int> dp2(nums.size()+1, -1);
        return max(solve(nums, 0, nums.size()-1, dp1), solve(nums, 1, nums.size(), dp2));
    }
};
