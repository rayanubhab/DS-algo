vector<int> preOrder(Node* root)
{
        vector<int> ans;
        stack<Node*> s;
        
        //cnt basically tells us how much execution or how many steps has been done
        unordered_map<Node*,int> cnt;
    
    if(root==NULL) return {};
    s.push(root);
    while(!s.empty()){
        
        Node* current = s.top();
        
//In case of leaf node null pointer will be pushed into the stack so we need to remove it and continue 
         if(current==NULL){
            
            s.pop();
            continue;
        }
       
        
        else if(cnt[current]==0) ans.push_back(current->data);
        else if(cnt[current]==1) s.push(current->left);
        else if(cnt[current]==2) s.push(current->right);
        
    //cnt is now 3 and execution of the current node is complete so we pop it out 
        else s.pop();
        
        cnt[current]++;
        
    }
    
    return ans; 
}





vector<int> inOrder(Node* root)
{
     vector<int> ans;
        stack<Node*> s;
        unordered_map<Node*,int> cnt;
    
    if(root==NULL) return {};
    s.push(root);
    while(!s.empty()){
        
        Node* current = s.top();
        
         if(current==NULL){
            
            s.pop();
            continue;
        }
       
        
        else if(cnt[current]==0) s.push(current->left);
        else if(cnt[current]==1) ans.push_back(current->data);
        else if(cnt[current]==2) s.push(current->right);
        else s.pop();
        
        cnt[current]++;
        
    }
    
    return ans; 
}





