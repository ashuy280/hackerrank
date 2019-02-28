
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode *add=new SinglyLinkedListNode(data);
    SinglyLinkedListNode *temp=nullptr;
    temp=head;
    while(position>1){
        temp=temp->next;
        position--;
    }
    if(temp->next==NULL){
        temp->next=add;
        return head;
    }
    else{
        add->next=temp->next;
        temp->next=add;
        return head;
    }
}
