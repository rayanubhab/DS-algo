  
//  T.C-> O(V*(V+E)) => Because we are applying bfs in all vertices(Naive method)
  
  void bfs(int s,vector<int> adj[],vector<int> &vis,int &count){
        vis[s] = 1;
        queue<int> q;
        q.push(s);
        count++;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            count++;
            for(int i=0;i<adj[curr].size();i++){
                vis[i] = 1;
                q.push(i);
            }
        }
    }
    //Function to find a Mother Vertex in the Graph.
	int findMotherVertex(int V, vector<int>adj[])
	{
	   vector<int> vis(V,0);
	   int count;
	   for(int i=0;i<V;i++){
	       count = 0;
	       bfs(i,adj,vis,count);
	       if(count==V) return i;
	       vis.resize(V,0);
	   }
	   return -1;
	}
