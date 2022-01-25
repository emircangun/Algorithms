Node* sortedInsert(Node* head, int data) {
    Node *temp = head; 
    Node *temp2 = head; 
    Node *node = new DoublyLinkedListNode(data);
    
    // if head is empty
    if (head == NULL){
        head = node;
        return head;
    }
    
    //if data is the lowest element, replace it to the head
    if(head->data > data){
        head = node;
        head->next = temp;
        return llist;
    }

    while (temp->next != NULL && temp->next->data < data) {
        temp = temp->next;
    }

    temp2 = temp->next;
    temp->next = node;
    node->next = temp2;
    node->prev = temp;
    if (node->next != NULL) node->next->prev = node;

    return head;
}
