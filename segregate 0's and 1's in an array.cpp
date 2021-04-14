  void segregate0and1(int arr[], int n){
        
        int count = 0;
        
        //Loop for calculating zeroes in the array
        
        for(int i = 0;i<n;i++){
            
            if(arr[i]==0)
                        count++;
        }
        
        //Loop for placing zeroes in the first section of the array
        for(int i = 0;i<count;i++){
            
            arr[i] = 0;
        }
        
        //Loop for placing 1 in the remaining cells
        
        for(int i = count;i<n;i++){
            
            arr[i] = 1;
        }
        
       
    }
