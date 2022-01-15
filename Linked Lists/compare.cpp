bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    while (head1 != NULL && head2 != NULL) {
        if (head1->data == head2->data){
            head1 = head1->next;
            head2 = head2->next;
        }else return false;
    }
    
    if ((head1 == NULL && head2 != NULL) || (head1 != NULL && head2 == NULL)) return false;

    return true;
}
