  int subarraySum(vector<int>& nums, int k) {
      
        int n = nums.size();
        int count = 0,curr_sum = 0;
        unordered_map<int,int> pref;
        for(int i=0;i<n;i++){
            curr_sum+=nums[i];
            if(curr_sum==k) count++;
            if(pref.find(curr_sum-k)!=pref.end()) count+=pref[curr_sum-k];
            pref[curr_sum]++;
        }
      return count;
    }
