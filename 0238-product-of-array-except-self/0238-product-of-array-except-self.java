class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n=nums.length;
        int[] prefix=new int[n];
        int[] postfix=new int[n];
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=nums[i]*prefix[i-1];
        }
        postfix[n-1]=nums[n-1];
        for(int j=n-2;j>=0;j--){
            postfix[j]=nums[j]*postfix[j+1];
        }
        int[] ans=new int[n];
        ans[0]=postfix[1];
        ans[n-1]=prefix[n-2];
        for(int i=1;i<n-1;i++){
            ans[i]=prefix[i-1]*postfix[i+1];
        }
        return ans;

    }
}