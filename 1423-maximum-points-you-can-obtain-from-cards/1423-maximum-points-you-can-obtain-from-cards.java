class Solution {
    public int maxScore(int[] cardPoints, int k) {
        int n=cardPoints.length;
        int l=0;
        int r=n-1;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        int ans=sum;
        int rsum=0;
        for(int i=k-1;i>=0;i--){
            sum=sum-cardPoints[i];
            rsum=rsum+cardPoints[r];
            ans=Math.max(ans,sum+rsum);
            r--;
        }
        return ans;
    }
}