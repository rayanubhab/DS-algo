vector<int> diagonal(Node *root)
{
    
    /*Basic idea : if a node has left child keep pushing it in the queue for future and if a node
    has right child keep pushing it into the vector until we reach NULL i.e there is no more right child*/
   queue<Node*> q;
   vector<int> ans;
   
   if(root==NULL){
       
       return {};
   }
   
   q.push(root);
   
   while(!q.empty()){
       
       Node* temp = q.front();
       q.pop();
       
       while(temp!=NULL){
           
           if(temp->left!=NULL) q.push(temp->left);
           ans.push_back(temp->data);
           temp = temp->right;
       }
   }
   
   return ans;
}
