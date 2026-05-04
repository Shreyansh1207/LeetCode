class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<2)return 0;
        int i=0;
        int j=0;
        int ans=0;
        int pro=1;
        while(j<nums.size()){
            pro*=nums[j];
            if(pro>=k){
                pro/=nums[i];
                i++;
            }
            ans+=j-i+1;
            j++;
        }
        return ans;
    }
};