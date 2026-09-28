class Solution {
    public double findMaxAverage(int[] nums, int k) {
        int i=0;
        int j=k-1;
        int sum=0;
        double ans=Double.NEGATIVE_INFINITY;
        for(int m=0;m<k;m++){
            sum+=nums[m];
        }
        while(j<nums.length){
            ans=Math.max(ans,sum/(double)k);
            sum-=nums[i];
            i++;
            j++;
            if(j<nums.length){
            sum+=nums[j];
            }
        }
        return ans;
    }
}