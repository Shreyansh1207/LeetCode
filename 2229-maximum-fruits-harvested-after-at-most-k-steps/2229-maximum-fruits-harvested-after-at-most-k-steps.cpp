#include <vector>
#include <algorithm> // ✅ Needed for lower_bound and upper_bound
using namespace std;

class Solution {
public:
    int maxTotalFruits(vector<vector<int>>& fruits, int startPos, int k) {
        //case1. jb pehle pr jo to sirf right jyega
        int ans = 0;
        int sirfrightwala = 0;
        int sirfleftwala = 0;

        //mera code   
        for (int i = 0; i < fruits.size(); i++) {
            int pos = fruits[i][0];
            int amt = fruits[i][1];
            if (pos >= startPos && pos <= startPos + k) {
                sirfrightwala += amt;
            }
            if (pos > startPos + k) break;
        }
        ans = max(sirfrightwala, ans);

        //mera code    
        for (int i = 0; i < fruits.size(); i++) {
            int pos = fruits[i][0];
            int amt = fruits[i][1];
            if (pos >= startPos - k && pos <= startPos) {
                sirfleftwala += amt;
            }
            if (pos > startPos) break;
        }
        ans = max(ans, sirfleftwala);

        // ✅ OPTIMIZED PREFIX SUM SECTION
        // Build prefix sum
        vector<int> pos, preSum = {0};
        for (auto& f : fruits) {
            pos.push_back(f[0]);
            preSum.push_back(preSum.back() + f[1]);
        }

        auto getRangeSum = [&](int l, int r) {
            auto it1 = lower_bound(pos.begin(), pos.end(), l);
            auto it2 = upper_bound(pos.begin(), pos.end(), r);
            int idx1 = it1 - pos.begin();
            int idx2 = it2 - pos.begin();
            return preSum[idx2] - preSum[idx1];
        };

        //mera opti code
        for (int x = 0; x <= k; x++) {
            int start = startPos - (k - 2 * x);
            int end = startPos + x;
            if (start > end) continue;
            ans = max(ans, getRangeSum(start, end));
        }

        for (int x = 0; x <= k; x++) {
            int start = startPos - x;
            int end = startPos + (k - 2 * x);
            if (start > end) continue;
            ans = max(ans, getRangeSum(start, end));
        }

        return ans;
    }
};
