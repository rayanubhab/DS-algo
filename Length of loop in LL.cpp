bool detectCycle(struct Node* head){
    Node* slow = head;
    Node* fast = head;
    
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast) return true;
    }
    return false;
}

//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    
    if(detectCycle(head)==false) return 0;
    
    Node* slow = head;
    Node* fast = head;
    
    do{
        slow = slow->next;
        fast = fast->next->next;
        
    }while(slow!=fast);
    
    //Edge case(when loop starts from the head itself)
    
    if(fast==head){
      
      int count = 1;
      while(slow->next!=head){
          count++;
          slow=slow->next;
      }
      return count;
    }
    
    
    //general case
    
    fast = head;
    while(slow->next!=fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    Node* start = slow->next; //starting point of loop
    Node* temp = start; //temp is for traversing
    int count = 1;
    while(temp->next!=start){
        count++;
        temp=temp->next;
    }
    return count;
    
}
