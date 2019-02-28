SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    SinglyLinkedListNode *temp=head;
    if(position==0){
        head=head->next;
        return head;
    }
    while(position>1){
        temp=temp->next;
        position--;
    }
    temp->next=(temp->next)->next;
    return head;

}
