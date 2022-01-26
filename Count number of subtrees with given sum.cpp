int sum(Node* root,int X,int &count){
    
    if(!root) return 0;
    
    int l = sum(root->left,X,count);
    int r = sum(root->right,X,count);
    
    if((l+r+root->data)==X) count++;
    
    return l+r+root->data;
}

int countSubtreesWithSumX(Node* root, int X)
{
    int count = 0;
    sum(root,X,count);
    return count;
}
