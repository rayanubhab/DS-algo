 bool isPossible(int arr[],int n,int k,long long mid){
      int painters = 1,days = 0;
      for(int i=0;i<n;i++){
          days+=arr[i];
          if(days>mid){
              painters++;
              days = arr[i];
          }
      }
      
      return (painters<=k) ? true : false;
      
  }
    long long minTime(int arr[], int n, int k)
    {
        long long low = -1,high = 0,ans = 0;
        
        for(int i=0;i<n;i++){
            high +=arr[i];
            low = max((long long)arr[i],low);
        }
        
        while(low<=high){
            long long mid = low+(high-low)/2;
            if(isPossible(arr,n,k,mid)){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
