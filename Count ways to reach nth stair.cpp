int dp[100001];
    int help(int s,int n){
        
        if(s==n) return 1; //If we are already in last stair 
        if(s>n) return 0;
        if(dp[s]!=-1) return dp[s];
        int ans= ((help(s+1,n)+help(s+2,n))%1000000007);
        dp[s]=ans;
        return ans;
    }
    
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {   for(int i=0;i<=100001;i++) dp[i]=-1;
        return help(0,n);
    }
