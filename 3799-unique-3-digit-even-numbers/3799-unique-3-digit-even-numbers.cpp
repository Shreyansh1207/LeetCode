class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        
        unordered_set<int> num;
        int count=0;
        for(int i=0;i<digits.size();i++){
            if(digits[i]==0)continue;
            for(int j=0;j<digits.size();j++){
                if(j==i)continue;
                for(int k=0;k<digits.size();k++){
                    if(k==i || k==j)continue;
                    int n=digits[i]*100+digits[j]*10+digits[k];
                    if(n%2==0){
                        num.insert(n);
                    }

                }
            }
        }
        return num.size();
        
    }
};