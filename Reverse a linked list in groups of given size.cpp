 struct node *reverse (struct node *head, int k)
    { 
       struct node* prevnode=NULL;
       struct node* current=head;
       struct node* nextnode;
       
       int c=0;
        
        while(current!=NULL && c<k){
            nextnode=current->next;
            current->next=prevnode;
            prevnode=current;
            current=nextnode;
            c++;
        }
        
        if(nextnode!=NULL) head->next=reverse(nextnode,k); //reversing the rest of the sublists recursively
        
        return prevnode;
    }
