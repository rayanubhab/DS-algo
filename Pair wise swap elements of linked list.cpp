 Node* pairWiseSwap(struct Node* head) 
    {
        if(head==NULL || head->next==NULL) return head;
        
        Node* p1 = head;
        Node* p2 = head->next;
        Node* p3 = p2->next;
        
        p2->next = p1;
        p1->next =  pairWiseSwap(p3);
        
        return p2;
      
      
      
    }
