class Solution {
public:
    int path(vector<vector<int>>&grid,int i,int j,vector<vector<int>>&DP){
        if(i>=grid.size() || j>=grid[0].size()) return INT_MAX;
        if(i == grid.size() - 1 && j == grid[0].size() - 1) return grid[i][j];
        if(DP[i][j]!=-1) return DP[i][j];

        int choice1=INT_MAX;
        int choice2=INT_MAX;
        choice1=path(grid,i+1,j,DP);
        choice2=path(grid,i,j+1,DP);
        return DP[i][j]=grid[i][j]+min(choice1,choice2);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int i=0;
        int j=0;
       
        vector<vector<int>> DP(grid.size(), vector<int>(grid[0].size(), -1));
        return path(grid,i,j,DP);     
    }
};