class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<2){
            return nums.size();
        }
        sort(nums.begin(),nums.end());
        int count=1;
        int curr=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                continue;
            }
            if(abs(nums[i]-nums[i+1])==1){
                curr++;
            }
            else{
                count=max(curr,count);
                curr = 1;
            }
            
        }
        return count = max(count, curr);;
    }
};