  TNode* sortedListToBST(LNode *head) {
       
       //base case
       if(head==NULL) return NULL;
       if(head->next==NULL) return new TNode(head->data);
       
       //find middle in LL
       LNode* slow = head;
       LNode* fast = head->next;
       
       while(fast->next!=NULL && fast->next->next!=NULL){
           slow = slow->next;
           fast = fast->next->next;
       }
       //at the the end of the loop slow points to the previous node of mid
       LNode* mid = slow->next;
       slow->next = NULL; //break the LL otherwise if it's not disconnected the whole LL will be treated as the left sub tree of root
       TNode* root = new TNode(mid->data);
       //recursively call to build the left and right subtrees
       root->left = sortedListToBST(head);
       root->right = sortedListToBST(mid->next);
       return root;
    }

