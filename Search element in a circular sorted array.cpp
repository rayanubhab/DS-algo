 
  //Logic:We will always have atleast one strictly increasing(sorted) subarray
 
 
 int search(int A[], int l, int h, int key){
    
    int mid;
    
    while(l<=h){
        
        mid = (l+h)/2;
        
        if(A[mid]==key) return mid;
        
        //check if left half is sorted
        
        else if(A[l]<=A[mid]){
            
            //check if target element lies within left to mid range
            
            if(key<=A[mid] && key>=A[l])
            
            //search in left sorted half
            
            h=mid-1;
            
            //otherwise it will lie on right half
            
            else 
                 l = mid+1;
        }
        
//if LHS is not sorted then RHS must be sorted for sure
        
        else{
            
             //check if target element lies within mid to high range
             
             if(key>=A[mid] && key<=A[h])
             
             //search in right sorted portion
             
             l=mid+1;
             
             else
                //otherwise search in left portion
                
            h=mid-1;
        }
        
    }
   return -1; 
    }
