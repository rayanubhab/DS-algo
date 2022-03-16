 
 //Recusrive + memoization
 int f(int i,int j,string &s1, string &s2,vector<vector<int>> &dp){
      
      //Base case
      if(i==0 && j==0) return 0;
      if(i==0) return j;
      if(j==0) return i;
      
      if(dp[i][j]!=-1) return dp[i][j];
      
      if(s1[i-1]==s2[j-1]) return dp[i][j] = f(i-1,j-1,s1,s2,dp);
      
      else{
          
          return dp[i][j] = 1+min(f(i,j-1,s1,s2,dp),min(f(i-1,j,s1,s2,dp),f(i-1,j-1,s1,s2,dp)));
      }
      
  }
  
    int editDistance(string s, string t) {
      
      int n = s.length();
      int m = t.length();
      vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
      return f(n,m,s,t,dp);
      
    }
    
    
    //Tabulation approach
     int editDistance(string s, string t) {
      
      int n = s.length();
      int m = t.length();
      vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
     //Initialization
     dp[0][0] = 0;
     for(int i=1;i<=n;i++) dp[i][0] = i;
     for(int i=1;i<=m;i++) dp[0][i] = i;
     
     for(int i=1;i<=n;i++){
         for(int j=1;j<=m;j++){
             if(s[i-1]==t[j-1]) dp[i][j] = dp[i-1][j-1];
             else dp[i][j] = 1+min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));
         }
     }
     
     return dp[n][m];
      
    }
