SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *temp1, *temp2;
    SinglyLinkedList *new_list;
    temp1 = head1;
    temp2 = head2;
    new_list = new SinglyLinkedList();
    bool checker = true;
    
    while (checker == true) {
        if (temp1->data <= temp2->data) {
            new_list->insert_node(temp1->data);
            if( temp1->next != NULL) temp1 = temp1->next;
            else if (temp1->next == NULL) { checker = false;}

        }else if(temp2->data < temp1->data){
            new_list->insert_node(temp2->data);
            if( temp2->next != NULL) temp2 = temp2->next;
            else if (temp2->next == NULL) { checker = false;}
        }
    }
    
    if (temp1->next == NULL)
    {
        while (temp2 != NULL)
        {
            new_list->insert_node(temp2->data);
            temp2 = temp2->next;
        }    
    }
    else if (temp2->next == NULL)
    {
        while (temp1 != NULL)
        {
            new_list->insert_node(temp1->data);
            temp1 = temp1->next;
        }
    }    
    
    return new_list->head;

}
