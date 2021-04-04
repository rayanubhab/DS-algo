bool hasArrayTwoCandidates(int arr[], int n, int x) {
	   
	   sort(arr,arr+n);
	   
	    int low = 0;
	    int high = n-1;
	    
	    while(low<high){
	        
	        if(arr[low]+arr[high]==x){
	            
	            return true;
	        }
	        
	        else if(arr[low]+arr[high]>x){
	            high--;
	        }
	        
	        else{
	            
	            low++;
	        }
	    }
	    
	    return false;
	}
