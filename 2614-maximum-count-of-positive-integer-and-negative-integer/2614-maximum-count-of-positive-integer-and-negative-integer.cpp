class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos=0;
        int neg=0;
        for(auto it:nums){
            if(it==0){
                continue;
            }
            if(it<0){
                neg++;
            }
            else{
                 pos++;
            }
        }
        return max(pos,neg);
    }
};