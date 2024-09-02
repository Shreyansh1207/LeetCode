class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>num;
        for(int i=0;i<nums.size();i++){
            num.insert(nums[i]);
        }
        
        if(num.size()<3){
            return *num.rbegin();
        }
        auto it=num.rbegin();
        // it++;
        // it++;
        advance(it,2);
        return *it;
        
    }
};