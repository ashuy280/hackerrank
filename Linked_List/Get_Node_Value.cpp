
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    int t=0;
    SinglyLinkedListNode *temp=head;
    while(temp!=NULL){
        t++;
        temp=temp->next;
    }
    t-=positionFromTail;
    while(t>1){
        head=head->next;
        t--;
    }
    return head->data;
}
