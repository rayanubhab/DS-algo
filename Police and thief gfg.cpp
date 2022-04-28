  int catchThieves(char arr[], int n, int k) 
    {
        // 2 pointer approach
        vector<int> police;
        vector<int> thief;
        
        for(int i=0;i<n;i++){
            if(arr[i]=='P') police.push_back(i);
            else thief.push_back(i);
        }
        
        int pidx = 0, tidx = 0,count = 0;
        while(pidx<police.size() && tidx<thief.size()){
            
            if(abs(police[pidx]-thief[tidx])<=k) pidx++,tidx++,count++;
            
            else if(police[pidx]>thief[tidx]) tidx++;
            
            else pidx++;
        }
        
        return count;
    }
