class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
       int idx=0;
       for(auto it:st){
        nums[idx]=it;
        idx++;
       }
       return idx;
    }
};