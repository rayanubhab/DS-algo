    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        int t[n+1][m+1];
        //Initialisation
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0||j==0) t[i][j]=0;
            }
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                
                if(S1[i-1]==S2[j-1]) t[i][j] = 1 + t[i-1][j-1];
                else t[i][j] = 0;
                
            }
            
        }
        
        //Find max value in the matrix
        int ans = 0;
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(t[i][j]>ans) ans = t[i][j];
            }
        }
       
       return ans; 
    }
