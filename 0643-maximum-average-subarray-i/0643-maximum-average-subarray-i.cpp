class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        double avg=INT_MIN;
        double cur=0;
        while(j<nums.size()){
            
            cur+=nums[j];
            
            if(j-i+1==k){
                double a=cur/k;
                avg=max(a,avg);
                cur-=nums[i];
                i++;
                
            }
            j++;
        }
        return avg;
    }
};