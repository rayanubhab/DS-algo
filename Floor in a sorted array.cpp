int findFloor(vector<long long> v, long long n, long long x){
        
        int low = 0;
        int high = n-1;
        int result;
        int mid;
        int flag = 0;
        
        while(low<=high){
            
            mid=(low+high)/2;
            
            if(v[mid]==x) return mid;
            
            else if(v[mid]<x){
                flag = 1;
                result = mid;
                low = mid+1;
            }
            
            else{
                
                high = mid-1;
            }
            
            
        }
        
        
        if(flag){
            
            return result;
        }
        
        else{
            
            return -1;
        }
        
    }
