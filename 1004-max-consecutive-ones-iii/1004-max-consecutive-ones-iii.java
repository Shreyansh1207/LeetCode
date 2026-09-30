class Solution {
    public int longestOnes(int[] nums, int k) {
        int i=0;
        int j=0;
        int kcount=0;
        int ans=0;
        for(;j<nums.length;j++){
           if(nums[j]==0){
            kcount++;
           }
           while(kcount>k){
            if(nums[i]==0){
                kcount--;
            }
            i++;
           }
           ans=Math.max(ans,j-i+1);
        }
        return ans;

    }
}