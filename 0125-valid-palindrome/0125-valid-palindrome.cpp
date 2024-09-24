class Solution {
public:
    string toLowerCase(string s){
        for(int i=0;i<s.length();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=s[i]+'a'-'A';
            }
        }
        return s;
    }
    bool isPalindrome(string s) {
        if(s==""){
            return true;
        }
        s=toLowerCase(s);
        int n = s.length();
        int i = 0;
        int j = n;
        while(i<n && j>=0)
        {
            if (isalnum(s[i]) == 0)
            {
                i++;
            }
            else if (isalnum(s[j]) == 0)
            {
                j--;
            }
            else if (s[i] == s[j])
            {
                ++i; 
                j--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};