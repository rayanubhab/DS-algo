  struct info{
        
        int max_val;
        int min_val;
        bool isBST;
        int size;
    };
    
    info solve(Node *root,int &maxSize){
        
        //Base case
        if(root==NULL) return {INT_MIN,INT_MAX,true,0};
     
        
        info leftsubTree = solve(root->left,maxSize);
        info rightsubTree = solve(root->right,maxSize);
        
        info currNode;
        currNode.max_val = max(root->data,rightsubTree.max_val);
        currNode.min_val = min(root->data,leftsubTree.min_val);
        
        if(leftsubTree.isBST && rightsubTree.isBST && (root->data>leftsubTree.max_val && root->data<rightsubTree.min_val)) currNode.isBST = true;
        else currNode.isBST = false;
        
        currNode.size = 1+leftsubTree.size + rightsubTree.size;
        //update answer
        if(currNode.isBST) maxSize = max(maxSize,currNode.size);
        
        return currNode;
    }
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    int largestBst(Node *root)
    {
       int maxSize = 0;
       info temp = solve(root,maxSize);
       return maxSize;
    }
