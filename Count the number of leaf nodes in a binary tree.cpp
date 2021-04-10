int countLeaves(Node* root)
{
  //If tree is empty i.e tree doesn't exist
  
  if(root==NULL){
      
      return 0;
  }
  
  
  if(root->left == NULL && root->right == NULL){
      
      return 1;
  }
  
  else{
      
    return  countLeaves(root->left) + countLeaves(root->right);
  }
  
}

