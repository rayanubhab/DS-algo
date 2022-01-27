   Node* prevnode;
    Node* currnode;
    Node* nextnode;
    
    Node* reverse(Node* head,int k){
        prevnode = NULL;
        currnode = head;
        int c = 0;
        while(currnode!=NULL && c<k){
            nextnode = currnode->next;
            currnode->next = prevnode;
            prevnode = currnode;
            currnode = nextnode;
            c++;
        }
        return prevnode;
    }
    
    int length(Node* head){
        int l = 0;
        Node* curr = head;
        while(curr!=NULL){
            l++;
            curr = curr->next;
        }
        return l;
    }
    
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
    //   steps:
    //   (i)Reverse k nodes
    //   (ii)Reverse remaining n-k nodes
    //   (iii)Reverse the entire linked list
    int N = length(head);
    Node* temp = reverse(head,k);
   
    head->next = reverse(nextnode,N-k);
    Node* ans = reverse(temp,N);
    return ans;
    }
