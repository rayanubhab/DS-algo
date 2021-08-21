int solve(int n,int m, vector<string> &all_paths, string path,vector<vector<char>>&matrix){
      path += matrix[n][m];
      if(n==0 && m==0){
          //reverse(path.begin(),path.end());
          all_paths.push_back(path);
          return 0;
      }
      if(n==0){solve(n,m-1,all_paths,path,matrix);
              return 1;
      }
      
      if(m==0){
          solve(n-1,m,all_paths,path,matrix);
          return 1;
      }
      return solve(n,m-1,all_paths,path,matrix)+solve(n-1,m,all_paths,path,matrix);
  }
  
    int countPalindromicPaths(vector<vector<char>>matrix){
        vector<string> all_paths;
        string path = "";
        //n -> rows and m->columns
        int m = matrix[0].size();
        int n = matrix.size();
        solve(n-1,m-1,all_paths,path,matrix);
        int count = 0;
        for(int i=0;i<all_paths.size();i++){
           string S = all_paths[i];
           int h = S.length()-1;
           int l =0;
           int flag=1;
           while(l<h){
               if(S[l]==S[h]){
            l++;
            h--;
        }
        
        else{
            flag=0;
            break;
        }
           }
           if(flag) count++;
        }
        
        return count;
    }
