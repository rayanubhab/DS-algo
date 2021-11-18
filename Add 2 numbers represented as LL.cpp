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
    
    //Function to add two numbers represented by linked list.
   struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first = reverse(first);
       second = reverse(second);
       int c=0;
       int s=0;
       Node* temp=NULL;
       Node* res=NULL;//head of the resultant linked list
       Node* cur=NULL;//iterator for the result linked list
       while(first!=NULL || second!=NULL){
           s=c+(first?first->data:0)+(second?second->data:0);
           c=(s<=9)?0:1;
         
           temp=new Node(s%10);
           if(res==NULL) res=temp; //first time since result is NULL
           else cur->next=temp;
           //move iterators forward
           cur=temp;
           if(first) first=first->next;
           if(second) second=second->next;
       }
       //If carry is still left then make a new node of value 1 and add it to the res LL
       if(c){
           temp=new Node(1);
           cur->next=temp;
           cur=temp;
       }
       res = reverse(res);
       return res;
    }
