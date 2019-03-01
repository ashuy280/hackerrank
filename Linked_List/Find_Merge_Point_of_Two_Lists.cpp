
int findMergeNode(SinglyLinkedListNode* headA, SinglyLinkedListNode* headB) {
  SinglyLinkedListNode *currentA = headA;
  SinglyLinkedListNode *currentB = headB;
  // Do till the two nodes are the same
  while (currentA != currentB) {
    if (currentA->next == NULL) {
      currentA = headB;
    } else {
      currentA = currentA->next;
    }
    // currentB
    if (currentB->next == NULL) {
      currentB = headA;
    } else {
      currentB = currentB->next;
    }
    }
    return currentB->data;
}
