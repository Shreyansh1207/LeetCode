class Solution {
public:
    int divisorSubstrings(int num, int k) {
        auto s=to_string(num);
        int ans=0;
       int i=0,j=0;
       while(j<s.size()){
           if(j-i+1==k){
                    auto cur=s.substr(i,j-i+1);
                    auto curnum=stoi(cur);
                    if(curnum!=0&&num%curnum==0)ans++;
                    i++;
           }
           j++;
       }return ans;
    }
};