vector <int> calculateSpan(int price[], int n)
    {
        stack <pair<int,int>> s;
        vector<int> ans;
    
    for(int i=0;i<n;i++){
        
        if(s.empty())   ans.push_back(-1);
        
          else{  
            while(s.size()>0  and s.top().second<=price[i]){  
            s.pop();
            }
            if(s.empty())   ans.push_back(-1);
            else            ans.push_back(s.top().first);
            
        
          }
    
        s.push({i,price[i]});
        
    }
    
    for(int i = 0;i<ans.size();i++){
        
        ans[i] = i - ans[i];
    }
    
    return ans;

       
    }
