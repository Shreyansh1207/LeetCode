class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<1) {
        return 0;
        }
        sort(nums.begin(),nums.end());
        int max=0;
        for(int i=1;i<nums.size();i++){
            if(abs(nums[i]-nums[i-1])>max){
                max=abs(nums[i]-nums[i-1]);
            }

        }
        return max;

        
    }
};