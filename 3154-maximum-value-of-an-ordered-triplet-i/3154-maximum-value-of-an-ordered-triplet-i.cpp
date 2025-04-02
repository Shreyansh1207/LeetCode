class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans=LLONG_MIN;
        if(nums.size()==3 && (((nums[0] - nums[1]) * 1LL * nums[2])<=0)){
            return 0;
        }
        for(int i=0;i<nums.size()-2;i++){
            for(int j=i+1;j<nums.size()-1;j++){
                for(int k=j+1;k<nums.size();k++){
                    ans=max(ans,((nums[i] - nums[j]) *  1LL *nums[k]));
                }
            }
        }
        return max(ans, 0LL);
    }
};