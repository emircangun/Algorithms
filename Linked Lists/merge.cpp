SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *temp1, *temp2;
    SinglyLinkedList *new_list;
    temp1 = head1;
    temp2 = head2;
    new_list = new SinglyLinkedList();

    if (head1 != NULL && head2 != NULL) {
        if (head1->data < head2->data){ 
            new_list->insert_node(temp1->data);
            temp1 = head1->next;
        }
    
        else { 
            new_list->insert_node(temp2->data);
            temp2 = head2->next;
            }
    }
    
    
    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->data < temp2->data) {
            new_list->insert_node(temp1->data);
            temp1 = temp1->next;

        }else if(temp2->data < temp1->data){
            new_list->insert_node(temp2->data);
            temp2 = temp2->next;
        }
    }
    
    if (temp1 == NULL)
    {
        while (temp2 != NULL)
        {
            new_list->insert_node(temp2->data);
            temp2 = temp2->next;
        }    
    }
    else
    {
        while (temp1 != NULL)
        {
            new_list->insert_node(temp1->data);
            temp1 = temp1->next;
        }
    }    
    return new_list->head;

}