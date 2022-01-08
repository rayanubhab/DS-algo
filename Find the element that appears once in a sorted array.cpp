	
Intution- The required element will always lie on the portion that has odd number of elements in it.
	NOTE- If the first condition fails, while segregating the portions we need to keep the elements that are equal together in one portion otherwise the odd/even logic will fail


int search(int A[], int N){
	  
	    
	    int low = 0,high = N-1;
	    
	    while(low<=high){
	        int mid = low+(high-low)/2;
	        //General case
	        if(mid>0 && mid<N-1){
	            
	            if(A[mid]!=A[mid-1] && A[mid]!=A[mid+1]) return A[mid];
	            
	            else if(A[mid]==A[mid-1]){
	                
	                int lc = mid-low+1; //number of elemenrs in left portion
	                if(lc%2 ==0) low = mid+1; //If its even search in right half
	                else high = mid-2;
	            }
	            
	            else if(A[mid]==A[mid+1]){
	                
	                int rc = high-mid+1;
	                if(rc%2==0) high = mid-1;
	                else low = mid+2;
	            }
	            
	        }
	        
	        //Edge cases when the required number is present either at 1st index or last index
	        else if(mid==0){
	            if(A[mid]!=A[mid+1]) return A[mid];
	        }
	        
	        else if(mid==N-1){
	            if(A[mid]!=A[mid-1]) return A[mid];
	        }
	    }
	    
	}
