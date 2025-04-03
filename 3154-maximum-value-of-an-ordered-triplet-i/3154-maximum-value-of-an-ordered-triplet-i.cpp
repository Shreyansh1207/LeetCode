class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long maxT = 0, maxE = 0, maxD = 0;
        for (long num : nums) {
            maxT = max(maxT, maxD * num);
            maxD = max(maxD, maxE - num);
            maxE = max(maxE, num);
        }
        return maxT;
    }
};