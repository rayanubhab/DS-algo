int t[1001][1001];//DP matrix declaration
     
     int answer(int x,int y,string &s1,string &s2){
         
         if(x==0||y==0) return 0;
         if(t[x][y]!=-1) return t[x][y];//Base case
         
         if(s1[x-1]==s2[y-1]) return t[x][y]=1+answer(x-1,y-1,s1,s2);
         else return t[x][y]=max(answer(x-1,y,s1,s2),answer(x,y-1,s1,s2));
     }
     
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        
       //Filling all the values of dp matrix with -1 initially
       for (int i = 0; i <= x; i++)
		for (int j = 0; j <= y; j++)
			t[i][j] = -1;

       return answer(x,y,s1,s2);
    }
