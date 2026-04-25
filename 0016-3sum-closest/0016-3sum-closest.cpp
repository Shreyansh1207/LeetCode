class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closest = INT_MAX;
        int ans = 0;
        int n=nums.size();
        for (int i = 0; i < n - 2; i++) {
            int j = i + 1, k = n - 1;

            while (j < k) {
                int total = nums[i] + nums[j] + nums[k];

                if (abs(total - target) < closest) {
                    closest = abs(total - target);
                    ans = total;
                }

                if (total > target)
                    k--;
                else
                    j++;
            }
        }
        return ans;
    }
};