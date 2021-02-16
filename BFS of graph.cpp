	vector<int>bfsOfGraph(int V, vector<int> adj[]){
	    
	    
	    //Result vector 
	    
	    vector<int> v;
	    
	    //Create a queue for BFS
	    
	    queue<int> q;
	    
	    //Visited vector to keep track of V vertices , initialise it to 0
	    
	    vector<int> vis(V,0);
	    
	    //Push the source element into the queue and mark it visited
	    
	    q.push(0);
	    vis[0] = 1;
	    
	    //As long as the queue is not empty
	    while(!q.empty()){
	        
	        //Dequeue the first vertex and push it into the result vector 
	        int current = q.front();
	        q.pop();
	        v.push_back(current);
	
	//Get all adjacent vertices of the dequeued 
		// vertex. If an adjacent vertex has not been visited, 
		// then mark it visited and push it into the queue
		
		
		//Iterating through the adjacency list
		for(auto i:adj[current]){
		    
		    if(!vis[i]){
		        
		        vis[i] = 1;
		        q.push(i);
		    }
		    
		}
		
		
	    }
	    //Return result vector
	    return v;
	}
