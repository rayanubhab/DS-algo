 vector<int> verticalOrder(Node *root)
    {
        if(root==NULL) return {};
        map<int,vector<int>> m;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            Node* curr = q.front().first;
            int hd = q.front().second;
            q.pop();
            m[hd].push_back(curr->data);
            if(curr->left!=NULL) q.push({curr->left,hd-1});
            if(curr->right!=NULL) q.push({curr->right,hd+1});
        }
        vector<int> v;
       map< int,vector<int> > :: iterator it;
    for (it=m.begin(); it!=m.end(); it++)
    {
        for (int i=0; i<it->second.size(); i++){
            v.push_back(it->second[i]);
            
        }
        
    }
    return v;
    }
