    Node* addPolynomial(Node *p1, Node *p2)
    {
        if(p1==NULL && p2==NULL) return NULL;
        if(p1==NULL) return p2;
        if(p2==NULL) return p1;
        
         Node* result;
        if(p1->pow==p2->pow){
             result = new Node(p1->coeff+p2->coeff,p1->pow);
            result->next = addPolynomial(p1->next,p2->next);
        }
        else if(p1->pow < p2->pow){
            result = new Node(p2->coeff,p2->pow);
            result->next = addPolynomial(p1,p2->next);
        }
        else{
            
             result = new Node(p1->coeff,p1->pow);
            result->next = addPolynomial(p1->next,p2);
        }
        
        return result;
    }
      
