class Solution {
public:
    int solve(vector<vector<int>>&matrix,int i,int j,vector<vector<int>>&dp){
        int m=matrix.size();
        if (j < 0 || j >= m) return INT_MAX;
        if (i == m - 1) return matrix[i][j];
        if(dp[i][j]!=123456789) return dp[i][j];
        int down,dleft,dright;
        dleft=solve(matrix,i+1,j-1,dp);
        dright=solve(matrix,i+1,j+1,dp);
        down=solve(matrix,i+1,j,dp);
        int mini = min({dleft, down, dright});
        if(mini==INT_MAX) return INT_MAX;
        return dp[i][j]=matrix[i][j]+mini;

    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int ans=INT_MAX;
        int n=matrix.size();
        vector<vector<int>>dp(n,(vector<int>(n,123456789)));
        for(int i=0;i<matrix[0].size();i++){
            ans=min(ans,solve(matrix,0,i,dp));
        }
        return ans;
    }
};