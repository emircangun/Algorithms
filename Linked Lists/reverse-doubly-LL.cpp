Node* reverse(Node* node) {
    if (!node) return NULL;
  
    // swap left and right 
    Node *temp = node->next;
    node->next = node->prev;
    node->prev = temp;
    
    // stopping contition is prev being null
    if (!node->prev) return node;
    
    // recursive
    return reverse(node->prev);
}
