   vector<int> subarraySum(int arr[], int n, long long s)
    {   
       long long sum = 0;
        int start = 0,end  = 0;
    
        for(int end=0;end < n;end++){
            
            sum += arr[end];
            
            if(sum == s){
                return {start + 1,end + 1};
            }
            else if(sum > s){
                while(sum > s && start <= end){
                    sum -= arr[start];
                    start++;
                    
                    if(sum == s) return {start + 1,end + 1};
                }
            }
        }
        
        return {-1};
    }
