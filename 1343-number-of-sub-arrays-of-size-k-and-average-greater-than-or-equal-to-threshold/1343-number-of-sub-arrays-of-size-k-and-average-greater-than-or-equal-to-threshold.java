class Solution {
    public int numOfSubarrays(int[] arr, int k, int threshold) {
        int i=0;
        int j=k-1;
        int sum=0;
        int ans=0;
        for(int m=0;m<k;m++){
            sum+=arr[m];
        }
        while(j<arr.length){
            if(sum/k>=threshold){
                ans++;
                sum=sum-arr[i++];
                j++;
                if(j<arr.length){
                 sum=sum+arr[j];
                }
            }
            else{
                sum-=arr[i++];
                j++;
                if(j<arr.length){
                 sum=sum+arr[j];
                }
            }
        }
        return ans;
    }
}