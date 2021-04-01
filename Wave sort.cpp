 void convertToWave(int *arr, int n){
        
        for(int i=1;i<n;i=i+2){
            
            if(arr[i-1]<arr[i]){
                
                swap(arr[i],arr[i-1]);
            }
            
            if(arr[i]>arr[i+1] && i<=n-2){
                swap(arr[i],arr[i+1]);
            }
        }
        
    }
