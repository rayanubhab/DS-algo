 Node* lca(Node* root ,int n1 ,int n2 )
    {
       //If we reach the leaf node return NULL
       if(root==NULL){
           return NULL;
       }
       
       if(root->data == n1 || root->data == n2){
           
           return root;
       }
       
       //Find n1 and n2 in left sub tree and right sub tree
       Node* left = lca(root->left,n1,n2);
       Node* right = lca(root->right,n1,n2);
       
       if(left && right){
           return root;
       }
       
       if(left == NULL && right == NULL){
           
           return NULL;
       }
       
       if(left){
           
           return left;
       }
       
       else{
           return right;
       }
    }
