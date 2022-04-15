int helper(vector<int> &arr,int n,vector<int> &t){
     if(n<=0) return 0;
	 
	 
	 if(t[n]!=-1) return t[n];
	 int op1 = arr[n-1]+helper(arr,n-2,t);
	 int op2 = helper(arr,n-1,t);
	 return t[n] = max(op1,op2);
}
    int deleteAndEarn(vector<int>& nums) {
        
        int max_element = INT_MIN, n = nums.size();
        for(int i = 0;i<n;i++){
            max_element = max(max_element,nums[i]);
        }
        
       vector<int> freq(max_element+1,0);
        
        for(int i=0;i<n;i++){
            freq[nums[i]]+=nums[i];
        }
       
        vector<int> t(20001,-1);
       
        return helper(freq,freq.size(),t);
    }
