//Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        Node* temp = head;
        
        int ze = 0,on = 0, tw = 0;
        
        while(temp!=NULL){

           if(temp->data == 0){
               
               ze++;
           }
           
           else if(temp->data == 1){
               
               on++;
           }
           
           else{
               
               tw++;
           }
           temp = temp->next;

        }
        
        temp = head;
        
        while(ze||on||tw){
            
            if(ze){
                
                temp->data = 0;
                ze--;
            }
            
            else if(on){
                
                temp->data = 1;
                on--;
            }
            
            else if(tw){
                
                temp->data = 2;
                tw--;
            }
            
            temp = temp->next;
        }
        
        return head;
    }
