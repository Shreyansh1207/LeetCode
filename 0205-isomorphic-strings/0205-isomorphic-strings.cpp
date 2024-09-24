class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        int map1[256]={0};
        int map2[256]={0};

        for(int i=0;i<s.size();i++){
            char c1=s[i];
            char c2=t[i];
            if(map1[c1]!=map2[c2]){
                return false;
            }
            map1[c1]=i+1;
            map2[c2]=i+1;
        }
        return true;
        
    }
};