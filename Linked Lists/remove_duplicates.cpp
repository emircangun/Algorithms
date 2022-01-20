Node* remove_duplicates(Node* head) {
    Node *current;
    current = head;
    int data = head->data;
    
    while (current != NULL && current->next != NULL) {
        while(current->next != NULL && current->next->data == data){
            current->next = current->next->next;
        }
        current = current->next;
        data = current->data;   
    }
    return head;
}
