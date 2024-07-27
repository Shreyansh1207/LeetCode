class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int p=nums.size();
        vector<int>ans(2*p);
        
        for(int i=0;i<p;i++){
            ans[i]=nums[i];
            ans[p+i]=nums[i];
        }
        return ans;
        
    }
};