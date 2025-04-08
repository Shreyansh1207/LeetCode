class Solution {
public:
    int solve(vector<vector<int>>&triangle,int i,int j,vector<vector<int>>&dp){
        int m=triangle.size();
        if (i>=m||j<0||j>=triangle[i].size()) return INT_MAX;
        if (i == m - 1) return triangle[i][j];
        if(dp[i][j]!=12321321) return dp[i][j];
        int down = solve(triangle, i + 1, j, dp);
        int diag = solve(triangle, i + 1, j + 1, dp);

        int mini = min(down, diag);
        return dp[i][j] = triangle[i][j] + mini;
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        int n=triangle[0].size();
        vector<vector<int>> dp;
        for (int i = 0; i < m; ++i) {
            dp.push_back(vector<int>(triangle[i].size(), 12321321));
        }
        return solve(triangle,0,0,dp);
    }
    
};