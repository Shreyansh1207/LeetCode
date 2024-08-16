class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
         map<int,int>mpp;
        int n= nums.size();
        vector<int>v;
        

        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(mpp.find(i)==mpp.end()){
                v.push_back(i);


            }
        }
        return v;

        
    }
};