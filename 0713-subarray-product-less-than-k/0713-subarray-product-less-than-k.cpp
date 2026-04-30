class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1){
            return 0;
        }
        int i=0;
        int j=0;
        int res=0;
        int pro=1;
        while(j<nums.size()){
            pro*=nums[j];
            while(pro>=k){
                pro/=nums[i];
                i++;
            }
            res+=(j-i+1);
            j++;
        }
        return res;
    }
};