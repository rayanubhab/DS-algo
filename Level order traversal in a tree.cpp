vector<int> levelOrder(Node* node)
{
  //Your code here
  
  vector<int> v;
  
  if(node==NULL){
      
      return v;
  }
  
  //Declare a queue
  
  queue<Node*> q;
  
  //Push the root node inside the queue i.e address of the root node
  
  q.push(node);
  
  //As long as there is atleast one discovered node in the queue enter inside the loop
  
  while(!q.empty()){
      
      //Returns the element at the front doesnot remove it
      
      Node* temp = q.front();
      
      //Store the data in vector
      
      v.push_back(temp->data);
      
      //Remove the element from the queue
      
      q.pop();
      
      //Push the children nodes inside the queue
      
      if(temp->left!=NULL){
          q.push(temp->left);
      }
      
      if(temp->right!=NULL){
          q.push(temp->right);
      }
  }
  
  return v;
  
}
