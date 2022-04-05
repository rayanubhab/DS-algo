int result = INT_MIN;
int solve(Node* root){
    
    if(!root) return 0;
    if(root->left==NULL && root->right==NULL) return root->data;
    
    int l = solve(root->left);
    int r = solve(root->right);
    
    if(root->left!=NULL && root->right!=NULL){
        result = max(result,l+r+root->data);
        return root->data+max(l,r);
    }
    
    //edge case 
    //  2
    //   \
    //   -5   
    
    return root->left!=NULL ? l+root->data : r+root->data;
    
}
    int maxPathSum(Node* root)
    {
        if(!root) return 0;
       //For all the nodes, we will find the max_sum of path from root to leaf in left sub tree(l)
       //and max_sum of path from root to leaf in right sub tree(r)
       //whole path sum from one leaf to another leaf = l+r+root->data(Update for every node)
       int val = solve(root);
       //Handling edge cases
       if(root->left==NULL || root->right==NULL) result = max(result,val);
       return result;
       
    }
