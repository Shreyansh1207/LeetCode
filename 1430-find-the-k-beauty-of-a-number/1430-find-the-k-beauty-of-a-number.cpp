class Solution {
public:
    int divisorSubstrings(int num, int k) {
        auto s=to_string(num);
        int ans=0;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(j-i+1==k){
                    auto cur=s.substr(i,j-i+1);
                    auto curnum=stoi(cur);
                    if(curnum==0)continue;
                    if(num%curnum==0)ans++;
                }
            }
        }return ans;
    }
};