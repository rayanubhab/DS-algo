    string longestPalindrome(string S){
       
        int n = S.length();
        int dp[n][n];
        memset(dp,0,sizeof(dp));
        //Initialisation
        
        //All substrings of length 1 are palindrome
        
        for(int i=0;i<n;i++) dp[i][i] = 1;
        
        //check for sub strings of length 2
        
        for(int i=0;i<n-1;i++){
            if(S[i]==S[i+1]) dp[i][i+1] = 1;
        }
        
        //Initialisation complete
        
          // Check for lengths greater than 2.
          // k is length of substring
          
          for(int k=3;k<=n;k++){
              // i is the starting point of sub string
              for(int i=0;i<n && i+k-1<n;i++){
                  //j is the ending point of sub string
                  int j = i+k-1;
                  if(S[i]==S[j] && dp[i+1][j-1]==1) dp[i][j] = 1;
              }
          }
          
        //Find the longest length of sub string
        int ans = INT_MIN,start = -1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(dp[i][j]==1 && (j-i+1)>ans){
                    ans = j-i+1;
                    start = i;

                }
            }
           
        }
         return S.substr(start,ans);
} 
