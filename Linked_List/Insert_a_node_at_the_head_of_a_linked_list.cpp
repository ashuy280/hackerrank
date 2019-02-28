SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist,int data){
   SinglyLinkedListNode *temp=new SinglyLinkedListNode(data);
   if(llist==nullptr){
       return temp;
   }
   else{
       temp->next=llist;
       return temp;
   }
}
