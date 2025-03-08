class Solution {
public:
    int countGoodSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(j-i+1==3 && (s[j]!=s[j-1] && s[j-1]!=s[j-2] && s[j]!=s[j-2])){
                    count++;
                }
            }
        }
        return count;
    }
};