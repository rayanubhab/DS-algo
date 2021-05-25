void utility(Node *root,int l,int r,int &flag){
    
    if(root==NULL) return;
    
    //Base case
    
    if(flag) return;
    
    if(root->left == NULL && root->right == NULL){
        
        if(l==r || r==1) flag = 1;
        return;
        
    }
    
    utility(root->left,l,root->data-1,flag);
    utility(root->right,root->data+1,r,flag);
    
}

bool isDeadEnd(Node *root)
{
    int flag = 0;
    utility(root,INT_MIN,INT_MAX,flag);
    if(flag) return true;
    else return false;
}
