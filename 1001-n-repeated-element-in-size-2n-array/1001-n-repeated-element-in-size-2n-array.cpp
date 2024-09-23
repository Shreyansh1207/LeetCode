class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto& num:mpp){
            if(num.second>1){
                return num.first;
            }
        }
        return -1;
        
    }
};