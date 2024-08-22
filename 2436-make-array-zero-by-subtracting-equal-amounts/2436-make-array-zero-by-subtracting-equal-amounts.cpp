class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int ans=0;
        int cur=0;
        while(nums[nums.size()-1]>0){
            int cur=0;
            for(auto &i:nums){
                if(i==0)continue;
                if(cur==0){
                    cur=i;
                    i=0;
                    continue;
                }
                i-=cur;

            }
            ans++;
        }
        return ans;
    }
};