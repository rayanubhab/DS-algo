	string findRollOut(string s, long long arr[], int n)
	{
	  
	
	   long long t_roll[n] = {0}; //Initialising the array with 0
	   
	   for(int i=0;i<n;i++){
			t_roll[0]++;
			if(arr[i]<= n-1) 	t_roll[arr[i]]--;
	   }
	   
	   //prefix sum
	   for(int i=1;i<n;i++){
		t_roll[i] += t_roll[i-1];
	   }
	   
	   for(long long i=0;i<n;i++){
	     s[i] = (s[i]+t_roll[i]-97)%26+97;
	   }
	   return s;
	
	}
