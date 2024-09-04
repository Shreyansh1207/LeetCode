class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int>merArr(m+n);


        for(int i=0;i<m;i++){
            merArr[i]=nums1[i];

        }
        for(int j=0;j<n;j++){
            merArr[m+j]=nums2[j];
        }
        sort(merArr.begin(),merArr.end());
       int p=m+n;
        if((p)%2==0){

            return (merArr[(p/2)-1]+merArr[p/2])/2.0;
        }
        else{
            return (merArr[p/2]) ;
        }
    }
};