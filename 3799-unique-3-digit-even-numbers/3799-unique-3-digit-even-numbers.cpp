class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        // int count =0;
        // for(int i=0;i<digits.size();i++){
        //     int j=i+1;
        //     int k=digits.size()-1;
        //     while(j<k){
        //         int n=digits[i]*100+digits[j]*10+digits[k];
        //         if(digits[i]!=0 && (n)%2==0){
        //             count++;
        //             k--;
        //             j++;
        //         }
        //     }
        // }
        // return count;
        unordered_set<int> uniqueNumbers;
        int count=0;
        for(int i=0;i<digits.size();i++){
            if(digits[i]==0)continue;
            for(int j=0;j<digits.size();j++){
                if(j==i)continue;
                for(int k=0;k<digits.size();k++){
                    if(k==i || k==j)continue;
                    int n=digits[i]*100+digits[j]*10+digits[k];
                    if(n%2==0){
                        uniqueNumbers.insert(n);
                    }

                }
            }
        }
        return uniqueNumbers.size();
    }
};