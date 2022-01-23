
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    DoublyLinkedListNode *temp, *temp2= llist; 
    DoublyLinkedListNode *node = new DoublyLinkedListNode(data);
    if (llist == NULL){
        llist = node;
        return llist;
    }
    while (temp->next != NULL && temp->next->data < data) {
        temp = temp->next;
    }

    temp2 = temp->next;
    temp->next = node;
    node->next = temp2;
    node->prev = temp;
    node->next->prev = node;

    return llist;
}
