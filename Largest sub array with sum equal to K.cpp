    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
            long long start = 0,end = -1,curr_sum = 0;
       unordered_map<long long,long long> pref;
       long long ans = INT_MIN;
       for(long long i=0;i<N;i++){
           curr_sum+=A[i];
           
           if(curr_sum==K){
               end = i;
               start = 0;
               ans = max(ans,end-start+1);
           }
           
           if(pref.find(curr_sum-K)!=pref.end()){
               end = i;
               start = pref[curr_sum-K]+1;
               ans = max(ans,end-start+1);
              
           }
           pref.insert({curr_sum,i});
       }
       
       if(end==-1) return 0;
       else return ans;
    } 
