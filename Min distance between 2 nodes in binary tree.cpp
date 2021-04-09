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
    
    int height(Node* root,int val){
        
        if(root==NULL){
            
            return 1e9;
        }
        
        if(root->data == val){
            
            return 0;
        }
        
        return 1+min(height(root->left,val),height(root->right,val));
    }
    
int findDist(Node* root, int a, int b) {
    
    Node* ancestor = lca(root,a,b);
    
    int d1 = height(ancestor,a);
    int d2 = height(ancestor,b);
    
    return d1+d2;
}
