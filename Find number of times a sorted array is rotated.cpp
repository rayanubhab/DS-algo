	//Logic : number of times -> Index of the min element in the array
	
	int findKRotation(int arr[], int n) {
	    
	    int low = 0,high = n-1;
	    
	    while(low<=high){
	       
	       //case 1 : array is normal sorted so return the first element 
	        if(arr[low]<=arr[high]) return low;
	        
	        int mid = (low+high)/2;
	        
	        int next = (mid+1)%n, prev = (mid+n-1)%n;
	        
	        //Min element found return its index
	        
	        if(arr[prev]>=arr[mid] && arr[next]>=arr[mid]) return mid;
	        
	 //check if right portion is sorted if it is so look for min element in the left half which is unsorted
	        else if(arr[mid]<=arr[high]) high = mid-1;
	 //check if left portion is sorted if it is so look for min element in the right half which is unsorted	        
	        else if(arr[low]<=arr[mid])low = mid+1;
	    }
	    
	}
