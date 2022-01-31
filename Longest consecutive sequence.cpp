 
 //O(nlogn) approach
 
 int findLongestConseqseq(int arr[], int N)
    {
      set<int> s;
      for(int i=0;i<N;i++){
          s.insert(arr[i]);
      }
      set<int>:: iterator it;
      int curr_element = *(s.begin());
      int count = 1,ans = -1;
      s.erase(s.begin());
      for(it=s.begin();it!=s.end();it++){
          if((*it)==curr_element+1){
              count++;
              ans = max(ans,count);
          }
          else{
              count = 1;
              
          }
          curr_element = *it;
      }
      if(ans==-1) return 1; 
      return ans;
    }
    
    //O(n) approach using unordered set
    
    int findLongestConseqseq(int arr[], int N){
    	unordered_set<int> s;
    	for(int i=0;i<N;i++) s.insert(arr[i]);
    	int longestStreak = 0;
    	
    	for(int i=0;i<N;i++){
    		if(s.find(arr[i]-1)!=s.end()) continue; // not the starting point of sequence
			else{
				int currStreak = 1;
				int currNum = arr[i];
				while(s.find(currNum+1)!=s.end()){
					currStreak+=1;
					currNum+=1;
				}
				longestStreak = max(currStreak,longestStreak);
			} 
		}
		
		return longestStreak;
	}
