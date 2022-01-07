int distinctCount(int arr[], int n) {
        // code here
        int i=0,j=n-1,prev=INT_MIN,next = INT_MAX,count = 0;
        //prev and next are mainly used to handle duplicate elements
        while(i<=j){
            if(abs(arr[i])==abs(arr[j])){
                
                if(prev!=arr[i] && next!=arr[j]) count++;
                prev = arr[i];
                next = arr[j];
                i++;
                j--;
            }
            else if(abs(arr[i])>abs(arr[j])){
                
                if(prev!=arr[i])count++;
                prev=arr[i];
                i++;
            }
            else{
                
                 if(next!=arr[j])count++;
                 next=arr[j];
                 j--;
            }
        }
        
        return count;
    }
