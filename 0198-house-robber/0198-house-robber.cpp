class Solution {
public:

    int newrob(vector<int>&nums,int i,vector<int>&DP){
        if(i>=nums.size()) return 0;
        if(DP[i]!=-1) return DP[i];
        
        int choice1=INT_MIN;
        int choice2=INT_MIN;
        if(i<nums.size()){
            choice1=nums[i]+newrob(nums,i+2,DP);
        }
        choice2=newrob(nums,i+1,DP);
        return DP[i]=max(choice1,choice2);
    }
    int rob(vector<int>& nums) {
        int i=0;
        vector<int>DP(nums.size(),-1);
        return newrob(nums,i,DP);
        
    }
};