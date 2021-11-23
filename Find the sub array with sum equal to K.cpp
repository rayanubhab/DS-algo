  vector<int> subarraySum(int arr[], int n, long long s)
    {
        //Code when the array contains both +ve and -ve elements
        // If only positive then not required
       long long start = 0,end = -1,curr_sum = 0;
       unordered_map<long long,long long> pref;
       
       for(long long i=0;i<n;i++){
           curr_sum+=arr[i];
           
           if(curr_sum==s){
               end = i;
               start = 0;
               break;
           }
           
           if(pref.find(curr_sum-s)!=pref.end()){
               end = i;
               start = pref[curr_sum-s]+1;
               break;
           }
           pref.insert({curr_sum,i});
       }
       
       if(end==-1) return {-1};
       else return {start+1,end+1};
    }
