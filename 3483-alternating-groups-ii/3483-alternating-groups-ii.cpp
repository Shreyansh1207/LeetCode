class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
    int n = colors.size();
    int count = 0;

    vector<int> alt(n);
    for (int i = 0; i < n; i++) {
        alt[i] = (colors[i] != colors[(i + 1) % n]) ? 1 : 0;
    }
    int alternatingCount = 0;
    for (int i = 0; i < k - 1; i++) {
        alternatingCount += alt[i];
    }
    for (int i = 0; i < n; i++) {
        if (alternatingCount == k - 1) count++;
        alternatingCount -= alt[i];
        alternatingCount += alt[(i + k - 1) % n];
    }

    return count;
} 
    
};