// with recursion
Node * insert(Node * root, int data) {

    if (root == NULL){
        Node* p = new Node(data);
        root = p;
    }

    if (root->data < data)  root->right = insert(root->right, data);
    else if(root->data > data) root->left = insert(root->left, data);

    return root;
}

// w/o recursion

Node * insert(Node * root, int data) {

      if (root == NULL){
          Node* p = new Node(data);
          root = p;
          return root;
      }

      Node* temp;
      temp = root;
      bool o = true;
      while(o == true){
          if (temp->data < data){
              if (temp->right != NULL) {
                  temp = temp->right;
              }
              else{
                  Node* p = new Node(data);
                  temp->right = p;
                  o = false;
              }
          }
          else{
              if (temp->left != NULL) {
              temp = temp->left;
              }
              else{
                  Node* p = new Node(data);
                  temp->left = p;
                  o = false;
              }
          }     
      }
      return root;
  }
