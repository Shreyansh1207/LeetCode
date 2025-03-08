class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int ans=INT_MAX;
        for(int i=0;i<blocks.size()-k+1;i++){
            int count=0;
            for(int j=i;j<blocks.size();j++){
                if(j-i+1<=k && blocks[j]=='W'){
                        count++;
                    }
                }
            ans=min(ans,count);

        }
        return ans;
    }
};