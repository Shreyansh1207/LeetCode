class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        for(auto it:s){
            if(isalnum(it)){
                res += tolower(it);
            }
        }
        string c=res;
        reverse(c.begin(),c.end());
        if(res==c){
            return true;
        }
        return false;

    }
};