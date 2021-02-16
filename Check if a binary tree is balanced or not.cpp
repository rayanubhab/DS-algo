int height(Node* root){
    
    if(root==NULL){
        
        return 0;
    }
    
    else{
        
        return 1+max(height(root->left),height(root->right));
    }
}


// This function should return true if passed  tree is balanced, else false

bool isBalanced(Node *root)
{
   if(root==NULL){
       
       return 1;
   }
   
   int l = height(root->left);
   int r = height(root->right);
   
   if(abs(l-r)<=1 && isBalanced(root->left) && isBalanced(root->right)){
       
       return 1;
   }
   
   else{
       
       return 0;
   }
   
}

