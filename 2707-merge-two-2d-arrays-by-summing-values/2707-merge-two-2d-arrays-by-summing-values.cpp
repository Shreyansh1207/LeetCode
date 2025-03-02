class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int>mp1;
        for(auto it:nums1){
            mp1[it[0]]=(it[1]);
        }
        map<int,int>mp2;
        for(auto it:nums2){
            mp2[it[0]]=(it[1]);
        }
        // unordered_
        map<int, int> mergedMap;
        for (auto it : mp1) {
        mergedMap[it.first] = it.second;
    }

   
    for (auto it : mp2) {
        if (mergedMap.find(it.first) != mergedMap.end()) {
            mergedMap[it.first] += it.second;
        } else {
           mergedMap[it.first] = it.second;
        }
    }
    vector<vector<int>>ans;
    for(auto it:mergedMap){
        ans.push_back({it.first,it.second});
    }
    return ans;

        
    }
};