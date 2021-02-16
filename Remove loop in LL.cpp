bool detectLoop(Node* head)
{
    
    
    Node* slow = head;
    Node* fast = head;
    
    while(fast!=NULL && fast->next!=NULL){
        
        slow =  slow->next;
        fast = fast->next->next;
        if(fast == slow){
            
            return true;
        }
        
    }
    
    return false;
}


void removeLoop(Node* head)
{
    
    
    if(detectLoop(head)){
        
        Node* slow = head;
        Node* fast = head;
        
        do{
            slow =  slow->next;
         fast = fast->next->next;
        }while(slow!=fast);
        
        
        //Edge case i.e when cycle is with the first element
        
        if(fast==head){
            
            while(slow->next!=head){
                
                slow = slow->next;
            
            }
            slow->next = NULL;
            return;
        }
        
        
        
        fast = head;
        while(slow->next!=fast->next){
            slow =  slow->next;
            fast = fast->next;
        }
        
        slow->next =  NULL;
    }
    
    
}
