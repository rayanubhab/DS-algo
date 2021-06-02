 long long kthSmallest(long long a[],long long n,long long k){
        
         priority_queue<long long> mxhp;
      for(long long i=0;i<n;i++){
      mxhp.push(a[i]);
      if(mxhp.size()>k){
       mxhp.pop();}

          }
     return mxhp.top();
      
    }
    
    long long sumBetweenTwoKth( long long a[], long long n, long long k1, long long k2)
    {
        
        long long first = kthSmallest(a,n,k1);
        long long second = kthSmallest(a,n,k2);
        
        long long sum = 0;
        
        for(long long i=0;i<n;i++){
            
            if(a[i]>first && a[i]<second) sum+=a[i];
        }
        
       return sum; 
    }
