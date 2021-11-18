   Node* reverse(Node* head){
        
        Node* currnode=head;
        Node* prevnode=NULL;
        Node* nextnode;
        
        while(currnode!=NULL){
            nextnode=currnode->next;
            currnode->next=prevnode;
            prevnode=currnode;
            currnode=nextnode;
        }
        return prevnode;
    }
    Node* addOne(Node *head) 
    {
        head=reverse(head);
        Node* curr=head;
      
        
        while(curr!=NULL){
            if(curr->next==NULL && curr->data==9){
                curr->data=1;
                Node* temp = new Node(0);
                temp->next = head;
                head=temp;
                break;
            }
            else if(curr->data==9){
                curr->data=0;
                curr=curr->next;
            }
            
            else{
                curr->data=curr->data + 1;
                break;
                
            }
            
        }
        
       head=reverse(head);
       return head;
    }
