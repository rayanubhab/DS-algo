vector<int> reverseLevelOrder(Node *root)
{
    // code here
     queue<Node*> q;
    vector<int> v;
    
    if(root==NULL){
        v.push_back(root);
        return v;
    }
    
    q.push(root);
    while(!q.empty()){
        
        Node* temp = q.front();
        v.push_back(temp->data);
        q.pop();
        if(temp->right!=NULL){
            q.push(temp->right);
        }
        
        if(temp->left!=NULL){
            q.push(temp->left);
        }
    }
    
    reverse(v.begin(),v.end());
    return v;
}
