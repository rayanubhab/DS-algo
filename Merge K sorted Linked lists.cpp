  Node * mergeKLists(Node *arr[], int K)
    {
     priority_queue<pair<int,Node*>,vector<pair<int,Node*>>,greater<pair<int,Node*>>> minh;
     Node* head = NULL;
     Node* temp;
     
     for(int i=0;i<K;i++){
         
         if(arr[i]!=NULL) minh.push({arr[i]->data,arr[i]});
     }
     
     while(minh.size()>0){
         
         pair<int,Node*> x = minh.top(); //current node
         minh.pop();
         if(x.second->next!=NULL) {minh.push({x.second->next->data,x.second->next});}
         if(head==NULL){head=x.second;
             temp = head;
         }
         else{
             temp->next = x.second;
             temp = temp->next;
         }
     }
     
     return head;   
    }
