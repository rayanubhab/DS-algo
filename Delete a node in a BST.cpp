//Function to find maximum in left sub tree
int max(Node *root){
    
    //Max value will lie on the extreme right and the node with max value shouldnot have any right child
    if(root->right!=NULL) return max(root->right);
    
    else return root->data;
}



//Function to delete a node from BST.
Node *deleteNode(Node *root,  int X)
{
    if(root == NULL) return NULL;
    
    if(root->data>X){root->left = deleteNode(root->left,X);} //search for X in left sub tree
    
    else if(root->data<X){deleteNode(root->right,X);}//search for X in right sub tree
    
    else{
        
        //2 children
        if(root->left!=NULL && root->right!=NULL){
            
            //Find maximum in left sub tree
            int lmax = max(root->left);
            //Attach lmax to the node X
            root->data = lmax;
            //Remove(delete) lmax from left sub tree (otherwis we will have two nodes with same value)
           root->left = deleteNode(root->left,lmax);
        }
        
        //only left child exists 
        else if(root->left!=NULL){
            
            return root->left;
        }
        
        //only right child exists
        else if(root->right!=NULL){
            
            return root->right;
        }
        
        //Leaf node
        else{
            
            return NULL;
        }
        
        
    }
    
    return root;
}

