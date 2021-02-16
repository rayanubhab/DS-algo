int length(Node* head){
    
    int l = 0;
    Node* temp =  head;
    while(temp!=NULL){
        
        temp = temp->next;
        l++;
    }
    return l;
}


int intersectPoint(Node* head1, Node* head2)
{
    int l1 = length(head1);
    int l2 = length(head2);
    
    int d;
    
    Node* ptr1;
    Node* ptr2;
    
    if(l1>l2){
        
        d = l1-l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    
    else{
        
        d = l2-l1;
        ptr1 = head2;
        ptr2 = head1;
    }
    
    while(d){
        
        ptr1 = ptr1->next;
        if(ptr1==NULL){
            
            return -1;
        }
        
        d--;
    }
    
    while(ptr1!=NULL && ptr2!=NULL){
        
        if(ptr1==ptr2){
            
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
        
    }
    
    return -1;
}


