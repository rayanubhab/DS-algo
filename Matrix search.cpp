	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    int r = 0;
	    int c = M-1;
	    bool found = false;
	    
	    
	    while(c>=0 && r<N){
	    if (mat[r][c] == X){
	        
	        found = true;
	    }
	    
	    if(X>mat[r][c]){
	        
	        r++;
	    }
	    
	    else{
	        
	        c--;
	    }
	    
	    }
	    
	    if(found){
	        return 1;
	    }
	    
	    else{
	        return 0;
	    }
	}
