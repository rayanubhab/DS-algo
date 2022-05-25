struct Node* partition(struct Node* head, int x) {
   
   Node* head1 = new Node(-1);
   Node* head2 = new Node(-1);
   Node* head3 = new Node(-1);
   
   Node* h1 = head1;
   Node* h2 = head2;
   Node* h3 = head3;
   bool flag = 0;
   
   while(head){
       
       if(head->data<x){
           head1->next = new Node(head->data);
           head1 = head1->next;
       }
       else if(head->data==x){
           flag = 1;
           head2->next = new Node(head->data);
           head2 = head2->next;
       }
       else{
           head3->next = new Node(head->data);
           head3 = head3->next;
       }
       
       head = head->next;
   }
   if(flag){
       h2 = h2->next;
       head1->next = h2;
       h3 = h3->next;
       head2->next = h3;
   }
   else{
       h3 = h3->next;
       head1->next = h3;
   }
   
   return h1->next;
   
}
