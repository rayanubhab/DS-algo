 void retrieve(Node *root, vector<int> &v){
        
        if(root==NULL) return;
        
        retrieve(root->left,v);
        v.push_back(root->data);
        retrieve(root->right,v);
    }
    
    //Function that rearranges the current binary tree into BST from the inorder sequence
    
    void rearrange(Node *root, vector<int> &v, int &i){
        
        if(root==NULL) return;
        rearrange(root->left,v,i);
        root->data = v[i++];
        rearrange(root->right,v,i);
    }
    
    
    Node *binaryTreeToBST (Node *root)
    {
        vector<int> v;
        retrieve(root,v);
        sort(v.begin(),v.end());
        
        //i is basically for iterating the elements of the vector ony by one while building BST
        int i = 0;
        rearrange(root,v,i);
        return root;
    }
