 
 /*Basic idea: when a leaf node is encountered checck its level and when a leaf node is encountered
 for the second time comapre it with the level of the previously encountered leaf node if they are
 different then return false in this way check for all the leaf nodes*/
 
 
 
 
 int ans;
    
    void solve(Node *root,int height,int &ma){
        if(root==NULL) return;
        
        if(ans==0)return;
        
        //Condition for leaf node
        
        if(root->left==NULL && root->right==NULL){
            
            //when leaf node is encountered for the first time
            if(ma==-1){
                
                // Set first found leaf's level i.e height on ma
                
                ma = height;
            }
//If this is not first leaf node, compare its level with first leaf's level  
                   
            else{
                  if(height!=ma)
                  ans = 0;
            }
 //We will return after one leaf node is gone through           
            return;
        }
        
        //Go down and look for other leaf nodes recursively on left and right subtree
        solve(root->left,height+1,ma);
         solve(root->right,height+1,ma); 
    }
    
    bool check(Node *root)
    {
        //ma is basically for updating the levels it is initially set to -1
       int ma = -1;

//ans is initially assumed to be true
        ans = 1;
        int height = 0;
        solve(root,height,ma);
        return ans;
    }
