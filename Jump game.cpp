
//Greedy approach (O(n))
bool solve(vector<int>& nums) {
    
    int n = nums.size();
    int goal_index = n-1;

    for(int i=n-2;i>=0;i--){
            
            if((i+nums[i])>=goal_index){
                goal_index = i;
            }
           
    }

      return (goal_index==0) ? true : false;
   
}

//Recursion + Memoization O(n^2) approach
//f(index) = f(index+i), where i varies from 1 to nums[index]
//Logic : explore all the possibilities starting from index 0

bool helper(vector<int> &nums,int index,vector<int> &dp){
    if(index >= nums.size() - 1){
        return true;
    }
    if(dp[index] != -1) return dp[index];

    for(int i=1;i<=nums[index];i++){
        bool opt = helper(nums,index + i,dp);
        if(opt) return  dp[index] = true;
    }
    return dp[index] = false; //all the possibilities explored
}
bool solve(vector<int>& nums) {
    int n = nums.size();
    if(n == 1|| n == 0) return true;
    if(nums[0] == 0) return false;
    vector<int> dp(n,-1);
    return helper(nums,0,dp);   
}



//Jump Game - 2(DP approach)

//Min number of jumps to reach the end of array
//explore all paths and find the path which requires min jumps

//f(index) = 1+min{f(index+i)},where i varies from 1 to nums[index] => Recurrence relation

int helper(vector<int> &nums,int index,vector<int> &dp){
    if(index >= nums.size() - 1){
        return 0;
    }
    if(dp[index] != -1) return dp[index];

    int ans = nums.size() + 1;
    for(int i=1;i<=nums[index];i++){
        int opt = helper(nums,index + i,dp)+1;
        ans = min(ans,opt);
    }
    return dp[index] = ans;
}
int solve(vector<int>& nums) {
    int n = nums.size();
    if(n == 1|| n == 0) return 0;
    if(nums[0] == 0) return -1;
    vector<int> dp(n,-1);
    int ans = helper(nums,0,dp);   
    if(ans >= nums.size()) return -1;
    return ans;
}
