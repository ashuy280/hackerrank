
bool has_cycle(SinglyLinkedListNode* head) {
    if(head==nullptr)
        return false;
    map<SinglyLinkedListNode *, int> a;
    while(head!=NULL){
        if(a[head]==1)
            return true;
        else{
            a[head]=1;
        }
        head=head->next;
    }
    return false;
}
