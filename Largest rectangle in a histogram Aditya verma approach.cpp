    long long getMaxArea(long long arr[], int n)
    {
        //Calculate index of NSR element (right)
        
        vector<int> right;
        stack<int> s;
        
        for(int i=n-1;i>=0;i--){
            
            if(s.empty()) right.push_back(n);
            
            else{
            
            while(s.size()>0 && arr[s.top()]>=arr[i]){
                
                s.pop();
            }
            
            if(s.empty()){
                          right.push_back(n);}
            else{
                
                right.push_back(s.top());
            
            }
            
            }
                 
          s.push(i); 
            
        }
        
        reverse(right.begin(),right.end());
        
        //Calculate index of NSR (left)
        
                vector<int> left;
                stack<int> st;
        
        for(int i=0;i<n;i++){
            
            if(s.empty()) left.push_back(-1);
            
            else{
            
            while(st.size()>0 && arr[st.top()]>=arr[i]){
                
                st.pop();
            }
            
            if(st.empty()){
                            left.push_back(-1);}
            else{
                
                left.push_back(st.top());
            
            }
            
            }
                 
          st.push(i); 
        }
        
        //Calculate and return maximum area of rectangle
        
      long long area = 0;
      
      for(int i = 0;i<n;i++){
          
          area = max(area, arr[i]*(right[i]-left[i]-1));
          
      }
      
      return area;
      
    }
