class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)
        return false;
        for(int i=0;i<20;i++){
            int ans = pow(3,i);
            if(n==ans)
            return true;
        }
        return false;
    }
};