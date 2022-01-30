// 	Logic : check if the number of components before is same as number of components after removing the edge
	void dfs(vector<int> adj[],bool visited[],int src){
       visited[src]=true;
       for(auto i : adj[src]){
           if(!visited[i]) dfs(adj,visited,i);
       }
   }
   
   
   int isBridge(int V, vector<int> adj[], int c, int d) 
   {
       // Code here
       bool visited[V];
       memset(visited,false,sizeof(visited));
       
       int count1 = 0; 
       int count2 = 0;
       
       for(int i=0;i<V;i++){
           if(visited[i]==false){
               count1++;
               dfs(adj,visited,i);
           }
       }
       
       vector<int>::iterator it = find(adj[c].begin(),adj[c].end(),d);
       adj[c].erase(it);
       it = find(adj[d].begin(),adj[d].end(),c);
       adj[d].erase(it);
       
       memset(visited,false,sizeof(visited));
       for(int i=0;i<V;i++){
           if(visited[i]==false){
               count2++;
               dfs(adj,visited,i);
           }
       }
       if(count1==count2)return 0; //Number of components before == number of components after
       return 1;
       
       
   }
