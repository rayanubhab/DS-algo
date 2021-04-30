 bool isValid(int arr[],int n,int m,int mid){
      
      int student = 1;
      int sum = 0;
      
      for(int i=0;i<n;i++){
          if(arr[i]>mid) return false;
          sum = sum+arr[i];
          if(sum>mid){
              student++;
              sum = arr[i];
          }
          
          if(student>m) return false;
      }
      
      return true;
  }
  
    int findPages(int arr[], int n, int m) {
        
        
        if(n<m){
            return -1;
        }
        
        int sum = 0;
        
        for(int i=0;i<n;i++){
            
            sum = sum+arr[i];
        }
        
        int low = 0;
        int high = sum;
        int result = -1;
        int mid;
        
        while(low<=high){
            
            mid = (low+high)/2;
            
            if(isValid(arr,n,m,mid)){
                
                result = mid;
                high = mid-1;
            }
            
            else{
                low = mid+1;
            }
        }
        
        return result;
    }
