void reversePrint(SinglyLinkedListNode* head) {
    if(head==nullptr)
        return;
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
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
}
