//Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> s;
        
        for(int i=0;i<n;i++){
            
            s.push(i);
        }
        
        while(s.size()>=2){
            
            int i = s.top();
            s.pop();
            int j = s.top();
            s.pop();
            
//i knows j so i is not a celebrity            
            if(M[i][j]==1){
                
                s.push(j);
            }
            
            else{
                s.push(i);
            }
            
        }
        
        int potential = s.top();
        
        //check whether potential is actually the answer
        
        for(int k = 0;k<n;k++){
            
            if(k!=potential){
                
                if(M[potential][k]==1 || M[k][potential]==0) return -1;
            }
        }
      return potential;  
    }
