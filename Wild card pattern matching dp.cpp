int helper(int i,int j,string &pattern, string &str,vector<vector<int>> &dp){
      
      //Base case
      //(1)Both the strings are empty or exhausted
      if(i<0 && j<0) return true;
      //(2)pattern is exhausted, but still some characters are left in str for comparision
      if(j>=0 && i<0) return false;
      //(3)when all characters of str is checked and some characters are left in pattern,
      // in that case ony * should be present otherwise it will be invalid match
      if(j<0 && i>=0){
          for(int k=0;k<=i;k++){
              if(pattern[k]!='*') return false;
          }
          return true; // if ony * present, then it's a valid match
      }
      
      if(dp[i][j]!=-1) return dp[i][j];
      
      //General case
      //if the characters in both the strings match or if its a ? then we can proceed simply (check the next characters recursively)
      
      if(pattern[i]==str[j] || pattern[i]=='?'){
          return dp[i][j] = helper(i-1,j-1,pattern,str,dp);
      }
      
      //If there is a * in pattern then we have 2 choices
      if(pattern[i]=='*'){
          return dp[i][j] = helper(i-1,j,pattern,str,dp) || helper(i,j-1,pattern,str,dp);
      }
      
      return dp[i][j] = false;
      
  }
/*You are required to complete this method*/
    int wildCard(string pattern,string str)
    {
        int n = pattern.length();
        int m = str.length();
        vector<vector<int>> dp(n,vector<int> (m,-1));
        return helper(n-1,m-1,pattern,str,dp);
    }
