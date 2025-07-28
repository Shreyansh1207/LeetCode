class Solution {
public:
    vector<int> rev (vector<int>&nums,int k){
        vector<int>a(nums.size());
        int n=nums.size();
        for(int i=0;i<n;i++){
            int b=(i+k)%n;
            a[b]=nums[i];
        }

        return a;
    }
    void rotate(vector<int>& nums, int k) {
        vector<int>m(nums.size());
        m=rev(nums,k);
        for(int i=0;i<nums.size();i++){
            nums[i]=m[i];
        }
    }
};