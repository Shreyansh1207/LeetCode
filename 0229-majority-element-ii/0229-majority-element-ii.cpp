class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
          int n=nums.size();
        unordered_map<int,int>mpp;
        unordered_set<int> added;
        vector<int>v;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for (const auto& [key, value] : mpp) {
            if (value > n / 3 && added.find(key) == added.end()) {
                v.push_back(key);
                added.insert(key);
            }
        }
        return v;
    }
};