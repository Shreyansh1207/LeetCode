int peak(vector<int>arr){
    int s=0;
    int e=arr.size()-1;
    
    while(s<e){
        int mid=s+(e-s)/2;
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return s;
}
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        return peak(arr);

        
    }
};