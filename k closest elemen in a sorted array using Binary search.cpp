 vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        
        int low = 0;
        int high = n-1;
        int mid;
        int flag = 0;
        
        while(low<=high){
            
            mid = low + (high-low)/2;
            if(arr[mid]==x){
                flag = 1;
                break;
            }
            
            else if(arr[mid]<x){
                low = mid+1;
            }
            
            else{
                
                high = mid-1;}
                
                 }
                 
                int l = mid-1;
                int r = mid;
                if(flag) r= mid+1;
                
                vector<int> result;
                
                while(l>=0 && r<n && k>0){
                    
                    if(abs(arr[r]-x)<=abs(arr[l]-x)){
                        result.push_back(arr[r]);
                        r++;
                    }
                    
                    else{
                        result.push_back(arr[l]);
                        l--;
                    }
                    k--;
                }
        while(k>0 && l>=0){
            result.push_back(arr[l]);
            l--;
            k--;
        }
        
        while(k>0 && r<n){
            result.push_back(arr[r]);
            r++;
            k--;
        }
        
      return result;  
        
    }
    
    //wrong tc in gfg so not done
