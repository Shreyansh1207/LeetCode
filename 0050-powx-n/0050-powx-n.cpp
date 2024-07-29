class Solution {
public:
    double myPow(double x, int n) {
       double ans;
       long long N=n;
         
            if(n<0){
                N=-N;
                ans=1/pow(x,N);
            }
            else{
                ans=pow(x,N);
            }
        
       return ans;
    }
};