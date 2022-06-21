 // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        
        //2 pointer approach
        //i for iterating through the array
        //j for unflipping when required
        //flip variable for keeping track of how many flips have been made so far
        
        int j=0,ans = 0,flip = 0;
        
        for(int i=0;i<n;i++){
            
            if(arr[i]==0) flip++;
            
            while(flip>m){
                //unflip previous zeroes because we cannot move forward
                if(arr[j]==0) flip--;
                j++;
            }
            
            //length of segment in ans variable
            ans = max(ans,i-j+1);
        }
        
        return ans;
    }  
