class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int a=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10){
                if(nums[i]==i){
                    a=min(a,i);
                }
            }
            else{
                vector<int>digits;
                string numStr = to_string(nums[i]);
                for (char ch : numStr) {
                 digits.push_back(ch - '0');
                }
                int sum=0;
                for(auto it:digits){
                    sum+=it;
                }
                if(sum==i){
                    a=min(a,i);
                }
            }
        }
        if(a!=INT_MAX){
            return a;
        }
        else{
            return -1;
        }
    }
};