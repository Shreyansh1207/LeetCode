class Solution {
public:
    bool isNumber(string s) {
        int n = s.size();
        bool seenDigit = false, seenDot = false, seenExponent = false, numAfterE = true;
        
        for (int i = 0; i < n; ++i) {
            if (isdigit(s[i])) {
                seenDigit = true;
                numAfterE = true;
            } else if (s[i] == '+' || s[i] == '-') {
                if (i > 0 && s[i-1] != 'e' && s[i-1] != 'E') return false;
                if (i == n - 1) return false;
            } else if (s[i] == '.') {
                if (seenDot || seenExponent) return false;
                seenDot = true;
            } else if (s[i] == 'e' || s[i] == 'E') {
                if (seenExponent || !seenDigit) return false;
                seenExponent = true;
                numAfterE = false;
                if (i == n - 1) return false;
            } else {
                return false;
            }
        }
        return seenDigit && numAfterE;
    }
};
