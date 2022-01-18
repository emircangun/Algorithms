// Insert node at a specific positionin a linked list

Node* insertNodeAtPosition(Node* llist, int data, int position) {
    Node *node = new Node(data);
    Node *current_node;

    if(llist == NULL) return node;
    
    current_node = llist;
    int index = 0;
    
    while(index < position - 1){
        current_node = current_node->next;
        index++;
    }
    
    node->next = current_node->next;
    current_node->next = node;

    return llist;
}



// Insert a Node at the Tail of a Linked List

Node* insertNodeAtTail(Node* head, int data) {
    Node *temp;
    Node *node = new Node(data); 
    temp = head;
        if (head == NULL) return node;

    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = node;
    
    return head;
}



// Insert a Node at the Head of a Linked List

Node* insertNodeAtHead(Node* llist, int data) {
    Node *head = new Node(data);
    
    head->next = llist;
    
    return head;
}



// Print linked list in a reverse order

void reversePrint(Node* llist) {
    stack<int> stack;
    
    while (llist != NULL) {
        stack.push(llist->data);
        llist = llist->next;
    }
    
    while(!stack.empty()){
        cout << stack.top() << endl;
        stack.pop();
    }
}



// Delete a Node

Node* deleteNode(Node* llist, int position) {
    Node *node;
    node = llist;
    
    if (position == 0) return llist->next; 
    
    for (int i = 0; i < position - 1; i++) {
        node = node->next;
    }
    node->next = node->next->next;
    
    return llist;
}
