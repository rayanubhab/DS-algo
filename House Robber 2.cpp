 int solve(vector<int> &arr,int n,int t[]){
        
        if(n<=0) return 0;
        if(t[n]!=-1) return t[n];
        return t[n] = max(arr[n-1]+solve(arr,n-2,t),solve(arr,n-1,t));
    }
    
    int rob(vector<int>& nums) {
        
        if(nums.size()==1) return nums[0];
        vector<int> A(nums.begin(),nums.end()-1);
        vector<int> B(nums.begin()+1, nums.end());
        int t[101];
        memset(t,-1,sizeof(t));
        int c1 = solve(A,A.size(),t);
        memset(t,-1,sizeof(t));
        int c2 = solve(B,B.size(),t);
        return max(c1,c2);
    }
