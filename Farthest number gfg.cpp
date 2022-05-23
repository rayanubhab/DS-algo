   vector<int> farNumber(int N,vector<int> Arr){
      
      //algorithm:
      //Form suffix array by traversing the given array from the back(smallest element till this point)
  //apply binary search in the suffix array 
       
  vector<int> suffix(N);
  suffix[N-1] = Arr[N-1];
  vector<int> ans;
  
  for(int i=N-2;i>=0;i--){
      if(Arr[i]<suffix[i+1]) suffix[i] = Arr[i];
      else suffix[i] = suffix[i+1];
  }
  
  for(int i=0;i<N;i++){
      int low = i+1;
      int high = N-1;
      int temp = -1;
      while(low<=high){
          int mid = low+(high-low)/2;
          if(suffix[mid]<Arr[i]){
              temp = mid;
              low = mid+1;
          }
          else high = mid-1;
      }
      ans.push_back(temp);
  }
  
  return ans;
  
    }
