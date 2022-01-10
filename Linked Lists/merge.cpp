SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *temp1, *temp2, *new_list;
    temp1 = head1;
    temp2 = head2;

    if (head1->data < head2->data){ 
        new_list = new SinglyLinkedListNode(head1->data);
        temp1 = head1->next;
    }
    
    else { 
        new_list = new SinglyLinkedListNode(head2->data);
        temp2 = head2->next;
    }
    
    
    while (head1 != NULL && head2 != NULL) {
        if (temp1 < temp2) {
            
        }
    }
    


}
