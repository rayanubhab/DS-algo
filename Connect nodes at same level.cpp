  void connect(Node *root)
    {  if(root==NULL) return;
       queue<Node*> q;
       q.push(root);
       while(!q.empty()){
           int n = q.size();
           Node* prev = NULL;
           for(int i=1;i<=n;i++){
               Node* curr = q.front();
               q.pop();
               if(curr->left!=NULL) q.push(curr->left);
               if(curr->right!=NULL) q.push(curr->right);
               if(prev!=NULL) prev->nextRight = curr;
               
               prev = curr;
           }
           //Last node of every level will be pointing to NULL
           prev->nextRight = NULL;
       }
       
    }    
