//Variable for iterating through all the elements of preorder array
    int idx = 0;
    
    int search(int in[],int start,int end,int curr){
        
        for(int i=start;i<=end;i++){
            
            if(in[i]==curr){
                
                return i;
            }
        }
    }
    
    Node* helper(int in[],int pre[], int start,int end)
    {
        //Base case
        
        if(start>end)return NULL;
        
        int curr = pre[idx];
        
    // Increment Preorder Index Variable to pick next element in next recursive call. 
        idx++;
        
        Node* tnode = new Node(curr);
        
        //If there is only one element  directly return the node
        
        if(start==end)return tnode;
        
        //Find position of current element in inorder sequence
        
        int pos = search(in,start,end,curr);
        
        //Build left and right sub tree 
        
        tnode->left = helper(in,pre,start,pos-1);
        tnode->right = helper(in,pre,pos+1,end);
        
        return tnode;
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
          return helper(in,pre,0,n-1);
    }
