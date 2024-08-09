class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int totsum;
        int arrsum=0;
        int s=nums.size();
        for(int i=0;i<s;i++){
            arrsum += nums[i];
             
        }
        totsum = s*(s+1)/2;
        return totsum-arrsum;
        


    }
};