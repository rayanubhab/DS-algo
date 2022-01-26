  bool isIdentical(Node* root1,Node* root2){
      if(root1==NULL && root2==NULL) return true;
      if(root1==NULL || root2==NULL) return false;
      if(root1->data==root2->data && isIdentical(root1->left,root2->left) && isIdentical(root1->right,root2->right)) return true;
      return false;
  }
  
    //Function to check if S is a subtree of tree T.
    bool isSubTree(Node* T, Node* S) 
    {
       queue<Node*> q;
       q.push(T);
       
       while(!q.empty()){
           Node* curr = q.front();
           q.pop();
           if(curr->data==S->data){
               if(isIdentical(curr,S)) return true;
           }
           if(curr->left) q.push(curr->left);
           if(curr->right) q.push(curr->right);
       }
       
       return false;
        
    }
