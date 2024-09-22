class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int p=0;
        int n=0;
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        vector<int>ans;
        while(p<pos.size() && n<neg.size()){
            ans.push_back(pos[p]);
            p++;
            ans.push_back(neg[n]);
            n++;
        }
        return ans;

        
    }
};