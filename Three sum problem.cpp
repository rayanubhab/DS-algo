    bool find3Numbers(int A[], int n, int X)
    {
       sort(A,A+n);
       
       
       for(int i=0;i<n;i++){
           
           int low = i+1;
           int high = n-1;
           
           while(low<high){
               
               int current = A[low] + A[high] + A[i];
               
               if(X==current){
                   
                   return true;
               }
               
               else if(current>X){
                   high--;
               }
               
               else{
                   low++;
               }
           }
       }
       
    return false;   
    }
