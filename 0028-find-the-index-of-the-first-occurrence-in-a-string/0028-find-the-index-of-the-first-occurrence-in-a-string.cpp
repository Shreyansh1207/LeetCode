class Solution {
public:
    int strStr(string haystack, string needle) {
        int h=haystack.size();
        int n=needle.size();

        for (int i = 0; i <= h - n; ++i) {
            int j;
         for (j=0; j < n; ++j) {
            if (haystack[i + j] != needle[j]) {
                break; 
            }
        }
        if (j == n) {
            return i; // Found the needle, return the index
        }
    }
      return -1;  
        
    }
};