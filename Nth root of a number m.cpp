	long long multiply(long long mid,long long n){
	  
	  if(n==0) return 1;
	  else if(n%2==0){
	      long long y = multiply(mid,n/2);
	      return y*y;
	  }
	  else return multiply(mid,n-1);
	}
	
	int NthRoot(int n, int m)
	{   
	    
	    long long s = 1,e = m;
	    
	    while(s<=e){
	       long long mid = s+(e-s)/2;
	        long long i = multiply(mid,n);
	        if(i==m){
	          return mid;
	        }
	        else if(i<m) s = mid+1;
	        else e = mid-1;
	    }
	    
	    return -1;
	}  
