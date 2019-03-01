
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
  SinglyLinkedListNode *add = new SinglyLinkedListNode(data);
  if(head==nullptr)
    return add;
  SinglyLinkedListNode *temp=head;
  while(temp->next!=NULL)
        temp=temp->next;
  temp->next=add;
  return head; 
}
