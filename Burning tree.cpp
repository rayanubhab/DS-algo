   int helper(Node* src,unordered_map<Node*,Node*> &par){
       
       queue<Node*> q;
       q.push(src);
       unordered_map<Node*,int> vis; //to keep track of the visited nodes
       vis[src] = 1; //Mark the source node as visited
       int t = 0;
       while(!q.empty()){
           int n = q.size();
           for(int i=0;i<n;i++){
               Node* curr = q.front();
               q.pop();
               if(curr->left && !vis[curr->left]){
                   vis[curr->left] = 1;
                   q.push(curr->left);
               }
                 if(curr->right && !vis[curr->right]){
                   vis[curr->right] = 1;
                   q.push(curr->right);
               }
               
               if(par[curr] && !vis[par[curr]]){
                   vis[par[curr]]=1;
                   q.push(par[curr]);
               }
               
           }
           if(!q.empty()) t++;
       }
       
       return t;
   }
   
   Node* mark_parent(Node* root,int target,unordered_map<Node*,Node*> &par){
       
       queue<Node*> q;
       q.push(root);
       Node* res;
       while(!q.empty()){
           Node* curr = q.front();
           q.pop();
           if(curr->data==target) res = curr;
           
           if(curr->left){
               par[curr->left] = curr;
               q.push(curr->left);
           }
           
           if(curr->right){
               par[curr->right] = curr;
               q.push(curr->right);
           }
           
       }
       return res;
   }
   
    int minTime(Node* root, int target) 
    {
        unordered_map<Node*,Node*> par; //to keep track of parent for each node
        Node* src = mark_parent(root,target,par);
        int ans = helper(src,par);
        return ans;
    }
