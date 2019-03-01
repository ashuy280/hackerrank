
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode* temp=new DoublyLinkedListNode(data);
    DoublyLinkedListNode* curr=head;
    DoublyLinkedListNode* p=NULL;
    if(head==nullptr)
         return temp;
    while(curr!=NULL){
        if(curr->data>=data){
            if(curr->prev!=NULL){
                p=curr;
                (curr->prev)->next=temp;
                temp->next=curr;
                temp->prev=curr->prev;
                curr->prev=temp;
                return head;
            }
            else{
                curr->prev=temp;
                temp->next=curr;
                return temp;
            }
        }
        else{
            if(curr->next==NULL)
                break;
            curr=curr->next;
        }
    }
    curr->next=temp;
    temp->prev=curr;
    return head;

}
