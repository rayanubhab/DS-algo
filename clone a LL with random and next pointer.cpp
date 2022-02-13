  //T.c -> O(n)
  //S.C -> O(n)
  
  Node *copyList(Node *head)
    {
    //   step 1 : create a cloned LL considering only next pointers(ignore the random pointers for now)
    
        Node* cloneHead = new Node(head->data);
        Node* tail = cloneHead;
        Node* temp = head->next;
        
        while(temp!=NULL){
            
            Node* newNode = new Node(temp->data);
            tail->next = newNode;
            tail = newNode;
            temp=temp->next;
        }
        
//step 2 : Create a mapping between the nodes of original LL & cloned LL

unordered_map<Node*,Node*> oldToNewNode;
Node* originalNode = head;
Node* cloneNode = cloneHead;
while(originalNode!=NULL && cloneNode!=NULL){
    oldToNewNode[originalNode] = cloneNode;
    originalNode = originalNode->next;
    cloneNode = cloneNode->next;
}

//Step 3 : arrange random pointers in cloned LL
     originalNode = head;
     cloneNode = cloneHead;
     while(originalNode!=NULL && cloneNode!=NULL){
        cloneNode->arb = oldToNewNode[ originalNode->arb]; 
        originalNode = originalNode->next;
        cloneNode = cloneNode->next;
     }
     
     return cloneHead;
    }
