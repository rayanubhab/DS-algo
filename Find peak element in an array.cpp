int peakElement(int arr[], int n)
    {
       int low = 0;
   int high = n-1;
   int mid;
   
   if(n==1) return 0;
   
   while(low<=high){
       
       mid = low + (high-low)/2;
       
       if(mid>0 && mid<n-1){
           
           if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid;
           
            else if (arr[mid+1]>arr[mid]) low = mid+1;
           
            else high = mid-1;
       }
       
       else if(mid==0){
           
           if(arr[mid]>arr[mid+1]) return mid;
           
           else return mid+1;
       }
       
       else if(mid==n-1){
           
           if(arr[mid]>arr[mid-1]) return mid;
           
          
       }
       
   }
    }
