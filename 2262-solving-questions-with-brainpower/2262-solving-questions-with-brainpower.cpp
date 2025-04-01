class Solution {
public:
    // int solve(vector<vector<int>>questions,int i,vector<int>&dp){
    //     int row=questions.size();
    //     int col=questions[0].size();
    //     if(i>=row){
    //         return 0;
    //     }
    //     if(dp[i]!=-1){
    //         return dp[i];
    //     }
    //     int ch1,ch2;
    //     ch1=questions[i][0]+solve(questions,i+questions[i][1] + 1,dp);
    //     ch2=solve(questions,i+1,dp);

    //     return dp[i]=max(ch1,ch2);
    // }
    

    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        vector<long long> dp(n + 1, 0); // DP array to store max points

        for (int i = n - 1; i >= 0; i--) {
            int points = questions[i][0];      // Current question's points
            int jump = questions[i][1];        // Brainpower needed
            int nextIndex = i + jump + 1;      // Next possible index
            
            // Option 1: Take this question
            long long take = points + (nextIndex < n ? dp[nextIndex] : 0);
            
            // Option 2: Skip this question
            long long skip = dp[i + 1];

            // Store the best choice in DP
            dp[i] = max(take, skip);
        }

        return dp[0]; // The max points possible from index 0
    }

};