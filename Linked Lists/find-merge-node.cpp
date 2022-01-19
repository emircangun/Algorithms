int find_merge_node(Node* head1, Node* head2) {
    Node *current1 = head1;
    Node *current2 = head2;

    while(current1 != current2){
        
        if(current1->next == NULL){
            current1 = head2;
        }else current1 = current1->next;

        if(current2->next == NULL){
            current2 = head1;
        }else current2 = current2->next;
    }
    return current1->data;
}

// ps to self: search about the math behind this algoritm
