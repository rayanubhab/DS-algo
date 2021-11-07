int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return nums[0];
        }
        
        int low = 0,high = n-1;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            
            //base condition 
            if((mid == 0 || nums[mid - 1] != nums[mid]) && (mid == n-1 || nums[mid+1] != nums[mid])){
                return nums[mid];
            }
            else {
                if(nums[mid-1] == nums[mid]){
                    int leftArrayLength = (mid + 1);
                    int rightArrayLength = (n - (mid + 1));
                    
                    if(leftArrayLength % 2 != 0){
                        high = mid;
                    }
                    else {
                        low = mid + 1;
                    }
                }
                else if(nums[mid + 1] == nums[mid]){
                    int leftArrayLength = mid;
                    int rightArrayLength = n - mid;
                    
                    if(leftArrayLength % 2 != 0){
                        high = mid - 1;
                    }
                    else {
                        low = mid;
                    }
                }
                
            }
        }
        return -1;
    }
