class Solution {
public:

//Result vector declared globally
vector<int> v;


void solve(int src,vector<int>&vis,vector<int>adj[]){
    
   vis[src] = 1;
   v.push_back(src);
   //Iterate through the adjacency list
   
   for(auto i: adj[src]){
       
       //Check if its visited or not
       
       if(!vis[i]){
           
           //If its not visited call solve function on the adjacent node
           
           solve(i,vis,adj);
       }
   }
    
    
}
	vector<int>dfsOfGraph(int V, vector<int> adj[]){
	   
	   v.clear();
	   //Visited vector initial all set to zero
	   vector<int> vis(V,0);
	   solve(0,vis,adj);
	   return v;
	    
	}
};
