    
	//Method 1
	
	void sort012(int a[], int n)
    {
        int zeroes = 0,ones = 0,twoes = 0;
        
        for(int i = 0;i<n;i++){
            
            if(a[i]==0)
                   zeroes++;
            else if(a[i]==1)
                    ones++;
            else
                twoes++;
        }
         
         int j = 0;
         
         while(zeroes || ones || twoes){
             
             if(zeroes){
                 a[j]=0;
                 zeroes--;
             }
             
             else if(ones){
                 
                 a[j]=1;
                 ones--;
             }
             
             else if(twoes){
                 
                 a[j]=2;
                 twoes--;
             }
           
           j++;  
         }
    }
    
    
    
    //Approach 2
    //3 pointer approach
    
    int low = 0,medium = 0, high = n-1;
    
    while(medium<=high){
    	
    	if(a[medium]==0){
    		
    		swap(a[medium],a[low]);
    		low++;
    		medium++;
		}
		
		if(a[medium]==1){
			
			medium++;
		}
		
		if(a[medium]==2){
			
			swap(a[medium],a[high]);
			high--;
		}
	}
