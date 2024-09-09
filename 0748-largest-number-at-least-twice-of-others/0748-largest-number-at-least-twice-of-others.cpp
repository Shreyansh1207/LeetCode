class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        int maxi=0;
        for(int i=1;i<n;i++){
            if(nums[maxi]<nums[i]){
                maxi=i;

            }

        }
        for(int i=0;i<n;i++){
            if(i!=maxi && nums[i]*2>nums[maxi]){
                return -1;
            }
        }
        return maxi;
        
    }
};