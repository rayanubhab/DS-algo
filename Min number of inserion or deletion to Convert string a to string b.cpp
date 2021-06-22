	int LCS(string &X,string &Y,int m,int n){
        
        int t[1001][1001];
        
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0||j==0) t[i][j]=0;
            }
        }
        
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(X[i-1]==Y[j-1]) t[i][j] = 1+t[i-1][j-1];
                else t[i][j] = max(t[i-1][j],t[i][j-1]);
            }
        }
        return t[m][n];
    }
	
	int minOperations(string str1, string str2) 
	{ 
	    int m = str1.length();
	    int n = str2.length();
	    
	    int deletion = m-LCS(str1,str2,m,n);
	    int insertion = n-LCS(str1,str2,m,n);
	    
	    return deletion+insertion;
	} 
