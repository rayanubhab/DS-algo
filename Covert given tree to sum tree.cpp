int add(Node *node){
    
    
    if(node==NULL){
        
        return 0;
    }
    
   int sum =  node->data + add(node->left) + add(node->right);
   
   return sum;
    
}


void toSumTree(Node *node)
{
    
    //Base case
    if(node->left==NULL && node->right==NULL){
        
        node->data = 0;
        return;
    }
    
    int leftsum = add(node->left);
    int rightsum = add(node->right);
    
    node->data = leftsum + rightsum;
    
    toSumTree(node->left);
    toSumTree(node->right);
}


