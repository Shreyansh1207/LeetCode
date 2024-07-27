class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int p=nums.size();
        int k;
        vector<int>ans(p);
        for(int i=0;i<p;i++){
             k=nums[i];
            ans[i]=nums[k];
        }
    return ans;
    }
};