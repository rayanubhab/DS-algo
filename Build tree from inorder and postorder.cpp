int idx;
int search(int in[],int start,int end,int curr){
        
        for(int i=start;i<=end;i++){
            
            if(in[i]==curr){
                
                return i;
            }
        }
    }
    
 Node* helper(int in[],int post[], int start,int end){
     
      if(start>end)return NULL;
      int curr = post[idx];
      idx--;
      Node* tnode = new Node(curr);
      if(start==end)return tnode;
      int pos = search(in,start,end,curr);
      tnode->right = helper(in,post,pos+1,end);
      
      tnode->left = helper(in,post,start,pos-1);
        
        return tnode;
    
 }

Node *buildTree(int in[], int post[], int n) {
    
    idx = n-1;
     return helper(in,post,0,n-1);
}

