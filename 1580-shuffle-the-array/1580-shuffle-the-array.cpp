class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int m=nums.size();
         
        vector<int>suf(m);
        for(int i=0;i<n;i++){
            
            suf[2*i]=nums[i];
             
            suf[2*i+1]=nums[n+i];
             
             
        }
        
    return suf;     

    }
};