
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    if(head==nullptr)
        return head;
    SinglyLinkedListNode *temp=head,*b=NULL,*n=NULL;
        b=temp;
        n=temp->next;
        temp->next=NULL;
        temp=n;
        while(temp->next!=NULL){
            n=temp->next;
            temp->next=b;
            b=temp;
            temp=n;
        }
        temp->next=b;
        return temp;


}
