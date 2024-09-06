int firstOcc(vector<int>nums,int target){
    int s=0;
    int e=nums.size()-1;
    int ans=-1;
    while(s<=e){
       int mid=s+(e-s)/2;
       if(target==nums[mid]){
        ans=mid;
        e=mid-1;
       }
       else if(target<nums[mid]){
        e=mid-1;
       }
       else{
        s=mid+1;
       }
       mid=s+(e-s)/2;

    }
    return ans;

}
int lastOcc(vector<int>nums,int target){
     int s=0;
    int e=nums.size()-1;
    int ans=-1;
    while(s<=e){
       int mid=s+(e-s)/2;
       if(target==nums[mid]){
        ans=mid;
        s=mid+1;
       }
       else if(target<nums[mid]){
        e=mid-1;
       }
       else{
        s=mid+1;
       }
       mid=s+(e-s)/2;

    }
    return ans;

}
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        ans.push_back(firstOcc(nums,target));
        ans.push_back(lastOcc(nums,target));
        return ans;
        
    }
};