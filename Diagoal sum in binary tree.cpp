vector <int> diagonalSum(Node* root) {
    
     queue<Node*> q;
   vector<int> ans;
   
   
   if(root==NULL){
       
       return {};
   }
   
   q.push(root);
   
   int s;
   int size;
   
   while(!q.empty()){
           s=0;
           size = q.size();
    while(size--){
        
       Node* temp = q.front();
       q.pop();
       
       while(temp!=NULL){
           
           if(temp->left!=NULL) q.push(temp->left);
           s=s+temp->data;
           temp = temp->right;
       }
       
    } 
       
       ans.push_back(s);
   }
   
   return ans;
}
    
    

