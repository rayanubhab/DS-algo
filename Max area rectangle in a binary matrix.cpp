
//Function to calculate largest rectangle in a histogram

int getMaxArea(vector<int> &arr, int n)
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
        
      int area = 0;
      
      for(int i = 0;i<n;i++){
          
          area = max(area, arr[i]*(right[i]-left[i]-1));
          
      }
      
      return area;
      
    }
    
    
  
    int maxArea(int M[MAX][MAX], int n, int m) {
        
        vector<int> v;
        
        for(int j = 0;j<m;j++){
            
            v.push_back(M[0][j]);
        }
        
        int mx = getMaxArea(v,m);
        
        for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            
            if(M[i][j]==0) v[j] = 0;
            
            else v[j] = v[j] + M[i][j];
        }
        
         mx = max(mx,getMaxArea(v,m));
            
        }
        
        return mx;
    }
