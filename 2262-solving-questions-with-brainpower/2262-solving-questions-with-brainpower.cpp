class Solution {
public:
    long long solve(vector<vector<int>>& questions, int i, vector<long long>& dp){
        int row=questions.size();
        int col=questions[0].size();
        if(i>=row){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        long long ch1,ch2;
        int j=questions[i][1]+1;
        ch1=questions[i][0]+solve(questions,i+j,dp);
        ch2=solve(questions,i+1,dp);

        return dp[i]=max(ch1,ch2);
    }
    long long mostPoints(vector<vector<int>>& questions) {

        vector<long long>dp(questions.size()+1,-1);
        return solve(questions,0,dp);
    }
};