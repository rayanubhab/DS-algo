
int count_zeros_till_index(int arr[],int i)//returns the number of zeros in array till index i
	{
	    int count=0;
	    for(int j=0;j<=i;j++)
       {
           if(arr[j]==0)
            count++;
       }
       return count;
	}
	
	int perfectSum(int arr[], int n, int sum)
	{      
	    int mod = 1e9+7;
	    vector<vector<int>> t(n+1,vector<int>(sum+1,-1));
	    
	    for(int i=0;i<=sum;i++) t[0][i] = 0;
	    
	     for(int i=0;i<n+1;i++)
        {
            t[i][0]=pow(2,count_zeros_till_index(arr,i));
            //A little modification that is needed from Aditya verma's Code
        }                                         
            
	    
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=sum;j++){
	            if(arr[i-1]<=j) t[i][j] = ((t[i-1][j-arr[i-1]]%mod) + (t[i-1][j]%mod))%mod;
	            else t[i][j] = t[i-1][j]%mod;
	        }
	    }
	    return t[n][sum]%mod;
	}
