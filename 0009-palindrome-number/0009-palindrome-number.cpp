class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0||(x%10 == 0 && x!=0)) {
            return false;
        }
        long long rev=0;
        int dup=x;
        while(x>0){
            int k=x%10;
            x/=10;
            rev=rev*10+k; 
         }
         
       return rev==dup;
    }
};