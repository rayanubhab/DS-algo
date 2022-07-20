 int solve(TreeNode* root,int &ans){
        
        if(!root) return 0;
        if(root->left==NULL && root->right==NULL) return 1;
        
        int l = solve(root->left,ans);
        int r = solve(root->right,ans);
        
        int temp = 0;
        if(root->left!=NULL && root->val== root->left->val && root->right!=NULL && root->val==root->right->val){
            temp = l+r+1;
            ans = max(ans,temp);
            return max(l,r)+1;
        }
        else if(root->left!=NULL && root->left->val==root->val){
            temp = l+1;
            ans = max(ans,temp);
            return l+1;
        }
  else if(root->right!=NULL && root->right->val==root->val){
            temp = r+1;
            ans = max(ans,temp);
            return r+1;
        }
        else return 1;
    }
    
    int longestUnivaluePath(TreeNode* root) {
       
        int ans = 0;
        solve(root,ans);
        return (ans==0) ? 0 : ans-1;
    }  
