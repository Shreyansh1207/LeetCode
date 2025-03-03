class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>g;
        vector<int>s;
        vector<int>p;
        vector<int>ans;
        for(auto it:nums){
            if(it<pivot){
                s.push_back(it);
            }
            else if(it==pivot){
                p.push_back(it);
            }
            else{
                g.push_back(it);
            }
        }
        for(auto it:s){
            ans.push_back(it);
        }
        for(auto it:p){
            ans.push_back(it);
        }
        for(auto it:g){
            ans.push_back(it);
        }
        return ans;

    }
};