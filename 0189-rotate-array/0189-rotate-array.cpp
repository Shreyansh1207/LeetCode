class Solution {
public:
    
    void rotate(vector<int>& nums, int k) {
        vector<int>a(nums.size());
        int n=nums.size();
        for(int i=0;i<n;i++){
            int b=(i+k)%n;
            a[b]=nums[i];
        }
        nums=a;
    }
};