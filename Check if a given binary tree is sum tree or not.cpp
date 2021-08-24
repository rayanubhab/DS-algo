   int f = 1;
    int solve(Node* root){
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL) return root->data;
        int a = solve(root->left);
        int b = solve(root->right);
        if(a+b!=root->data) f = 0;
        return a+b+root->data;
    }
    
    bool isSumTree(Node* root)
    {
         solve(root);
         return f;
    }
