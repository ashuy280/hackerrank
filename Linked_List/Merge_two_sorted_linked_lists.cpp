
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    
    if (!head1) 
        return head2; 
    if (!head2) 
        return head1; 
  
    // start with the linked list 
    // whose head data is the least 
    if (head1->data < head2->data) 
    { 
        head1->next = mergeLists(head1->next, head2); 
        return head1; 
    } 
    else
    { 
        head2->next = mergeLists(head1, head2->next); 
        return head2; 
    } 
}
