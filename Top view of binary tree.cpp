vector<int> topView(struct Node *root)
{
    
    
    //First int denotes the horizontal distance, the second int denotes value of node
    
    map<int,int> m;
    
    //Node* refers to the node and int denotes the horizontal distance
    
    queue<pair<Node*,int>>q;
    
    vector<int> v;
    
    //Base case
    
    if(root==NULL){
        
        return v;
    }
//Initially push the root and its distance i.e 0 into the queue

q.push({root,0});

//As long as the queue is not empty

while(!q.empty()){
    
    //Returns the node at front
    Node* t=q.front().first;
    //Return he horizontal distance 
    int hd=q.front().second;
    q.pop();
    
    //If the node is visited for the first time i.e the map is zero update the map
    if(!m[hd]) m[hd]=t->data;
    
//Explore the children nodes if they exist push them into the queue
if(t->left) q.push({t->left,hd-1});
if(t->right) q.push({t->right,hd+1});
}


//Iterate the map and print it which will be in sorted order on the basis of key
for(auto x:m) v.push_back(x.second);
   
   return v; 
}

