 int solve(Node* root,int &ans){
      
      if(!root) return 0;
      
      //we are taking max with 0 to handle negative because we will not include sum then
      int l_sum = max(0,solve(root->left,ans)); 
      int r_sum = max(0,solve(root->right,ans));
      
      ans = max(ans,l_sum+r_sum+root->data);
      
      return root->data + max(l_sum,r_sum);
  }
  
    //Function to return maximum path sum from any node in a tree.
    int findMaxSum(Node* root)
    {
       int ans = INT_MIN;
       solve(root,ans);
       return ans;
    }
