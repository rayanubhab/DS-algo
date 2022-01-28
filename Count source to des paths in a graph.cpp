  void dfs(vector<int> adj[],int s,int d,vector<int> &vis,int &count){
      vis[s] = 1;
      if(s==d){
          count++;
          vis[s] = 0;
          return;
      }
      for(auto i : adj[s]){
          if(!vis[i]) dfs(adj,i,d,vis,count);
      }
      vis[s]=0;
  }
    // Function to count paths between two vertices in a directed graph.
    int countPaths(int V, vector<int> adj[], int source, int destination) {
       
       int count = 0;
       vector<int> vis(V,0);
       dfs(adj,source,destination,vis,count);
       return count;
    }
