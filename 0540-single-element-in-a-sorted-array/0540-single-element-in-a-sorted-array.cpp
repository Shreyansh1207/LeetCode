class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto n:mpp){
            if(n.second==1){
                return n.first;
                
            }
        }
        return -1;

        
    }
};