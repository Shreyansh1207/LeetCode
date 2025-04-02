class Solution {
public:
    int minOperations(vector<int>& nums) {
        int i=0;
        int ans=0;
        while(i<nums.size()-1){
            if(nums[i]<nums[i+1]){
                i++;
                // continue;
            }
            else{
                long long bet=(long long)nums[i+1]-nums[i];
                bet=abs(bet)+1;
                nums[i+1]+=bet;
                ans += bet;
                i++;
                
            }


        }
        return ans;
    }
};