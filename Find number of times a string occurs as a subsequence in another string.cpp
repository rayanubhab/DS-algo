
int solve(string S1,string S2,int n,int m,vector<vector<int>> &dp){
    
    if((n==0&&m==0)||m==0) return 1;
    if(n==0) return 0;
    if(dp[n][m]!=-1) return dp[n][m];
    if(S1[n-1]==S2[m-1]) return dp[n][m] = solve(S1,S2,n-1,m-1,dp) + solve(S1,S2,n-1,m,dp);
    else return dp[n][m] = solve(S1,S2,n-1,m,dp);
}

    int countWays(string S1, string S2){
        //find number of times S2 occurs in S1 as a subsequence
        int n = S1.length(),m = S2.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return solve(S1,S2,n,m,dp);
    }
