
  void solve(int N,int from,int to,int aux,long long &count){
      
      count++;
      if(N==1){
          cout<<"move disk "<<N<<" from rod "<< from <<" to rod "<< to <<endl;
          return;
      }
      
      solve(N-1,from,aux,to,count);
      cout<<"move disk "<<N<<" from rod "<< from <<" to rod "<< to <<endl;
      solve(N-1,aux,to,from,count);
      
  }
   
  
    long long toh(int N, int from, int to, int aux) {
       
       long long count = 0;
       solve(N,from,to,aux,count);
       return count;
    }
