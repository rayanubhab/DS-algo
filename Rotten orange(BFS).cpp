 //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        //queue of pairs that denote the coordinates
        queue<pair<int,int>> q;
        
        //Find the rotten oranges and push them in the queue
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){ if(grid[i][j]==2) q.push({i,j});
            }
        }
        
        int t=0;
        
        while(q.empty()==false){
            int count = q.size(); 
            //Explore the neighbours of all the rotten oranges
            for(int i=0;i<count;i++){
                
                //Find coordinates of rotten oranges
                int x = q.front().first,y = q.front().second;
                q.pop();
                //check in all 4 directions
                if(x>0 && grid[x-1][y]==1){grid[x-1][y]=2;q.push({x-1,y});}
                if(y>0 && grid[x][y-1]==1){grid[x][y-1]=2;q.push({x,y-1});}
                if(x<n-1 && grid[x+1][y]==1){grid[x+1][y]=2;q.push({x+1,y});}
                if(y<m-1 && grid[x][y+1]==1){grid[x][y+1]=2;q.push({x,y+1});}
                
            }
            
         if(q.empty()==false) t++;//IF any orange has not been contaminated no need to increment t
            
        }
        
        
        //check if any fresh oranges are still left
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1) return -1;
            }
        }
        
        return t;
        
    }
