class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<int>v;
        int k=m+n-2;
        int p=0;
        
        while(p<=k){
        vector<int>temp;
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i+j==p)
            temp.push_back(mat[i][j]);
            }
        }
        if (p % 2 == 0) {
            reverse(temp.begin(), temp.end());
        }
        v.insert(v.end(), temp.begin(), temp.end());
        p+=1;
        }
        return v;
    }
};