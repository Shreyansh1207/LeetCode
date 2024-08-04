class Solution {
public:
    bool digitCount(string num) {
        map<char,int>mpp;
        for(int i=0;i<num.size();i++){
            mpp[num[i]]++;
        }
        for(int i=0;i<num.size();i++){
            if((num[i]-'0')!=mpp['0'+i])
            return false;

        }
        return true;
        
    }
};