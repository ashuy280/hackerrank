
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *temp=head;
    while(temp!=NULL){
        if(temp->next!=NULL){
            if(temp->data==(temp->next)->data){
                temp->next=(temp->next)->next;
            }
            else
                temp=temp->next;           
        }
        else
            temp=temp->next;
    }
    return head;

}
