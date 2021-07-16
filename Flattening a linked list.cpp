   Node* sortedMerge(Node* head_A, Node* head_B)  
{  
    //Base case
    //If we reach the end of one LL return all the nodes of the other LL
    
    if(head_A==NULL){
        
        return head_B;
    }
    
    if(head_B==NULL){
        
        return head_A;
    }
    
    
    //Recursive case
    
    Node* result;
    
    if(head_A->data < head_B->data){
        
        result = head_A;
        result->bottom = sortedMerge(head_A->bottom,head_B);
    }
    
    else{
        
        result = head_B;
        result->bottom = sortedMerge(head_A,head_B->bottom);
    }
    
    return result;
}  
    
Node *flatten(Node *root)
{
   if(root==NULL||root->next==NULL) return root;
   
   return sortedMerge(root,flatten(root->next));
}


