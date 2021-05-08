int search(int arr[], int n, int x, int k)
{
    int jump,i=0;
    
    
        while(i<n){
            
        
        if(arr[i]==x) return i;
        
        jump = (abs(arr[i]-x))/k;
        
        if(jump>0)
                  i = i+jump;
        else
                  i++;
        }
        
    return -1;	
}    	
