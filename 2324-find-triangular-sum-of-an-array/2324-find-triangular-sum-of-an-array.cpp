class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int a=nums.size();
        while(a--){
            vector<int>v;
            for(int i=0;i<a;i++){
                int b=(nums[i]+nums[i+1])%10;
                v.push_back(b);
            }
            nums=v;
        }
        return nums[0];
    }
};