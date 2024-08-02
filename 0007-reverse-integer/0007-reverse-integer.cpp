class Solution {
public:
    int reverse(int x) { 
        long long num=0; 
        bool k = x<0;
        x=abs(x);
        while(x>0){  
            int last=x%10;   
            x=x/10;
            num=num*10+last; 

        }
        if(k){
        num=-num;
        }
         if (num < INT_MIN || num > INT_MAX) {
            return 0;
        }
        return num;
    }
};