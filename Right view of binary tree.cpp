vector<int> rightView(Node *root)
{
   // Your Code here
   queue<Node*> q;
   vector<int> v;
   
   if(root==NULL){
       
       return v;
   }
   
   q.push(root);
   
   while(!q.empty()){
       
       //Number of nodes at current level
       int n = q.size();
       
       //Traverse all the nodes at current level
       
       for(int i=1;i<=n;i++){
           
           Node* temp = q.front();
           q.pop();
      //Store the last element of the level in vector v     
           if(i==n){
               
               v.push_back(temp->data);
           }
           
if(temp->left!=NULL){
    
    q.push(temp->left);
}
   if(temp->right!=NULL){
       
       q.push(temp->right);
   }     
       }
   }
   
   return v;
}
