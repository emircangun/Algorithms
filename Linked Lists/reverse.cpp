// using stack
SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    stack<int> stack;
    SinglyLinkedListNode *temp;
    temp = llist;
    while(temp != NULL){
        stack.push(temp->data);
        temp = temp->next;
    }

    temp = llist;
    
    while(temp != NULL){
        temp->data = stack.top();
        stack.pop();
        temp = temp->next;
    }
    
    return llist;
}

// recursive
SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
     if (llist == NULL || llist->next == NULL)
            return llist;

    SinglyLinkedListNode* head = reverse(llist->next);
    llist->next->next = llist;
    llist->next = NULL;

    return head;
}
