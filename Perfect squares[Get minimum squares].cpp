	int solve(int n,vector<int> &dp){
	    
	    if(n==0 || n==1 || n==2) return n;
	    if(dp[n]!=-1) return dp[n];
	    int ans = INT_MAX;
	    for(int i=1;i<=sqrt(n);i++){
	        ans = min(ans,1+solve(n-(i*i),dp));
	    }
	    return dp[n] = ans;
	}
	
	int MinSquares(int n)
	{
	    vector<int> dp(n+1,-1);
	   return solve(n,dp);
	}
