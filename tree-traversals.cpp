class Node{
    public:
        int data;
        Node* right;
        Node* left
};

void preorder(Node *root){
    if(root == NULL) return;

    cout << root.data << " ";
    preorder(root->left);
    preorder(root->right);
}


void postorder(Node *root){
   if (root){
        postorder(root->left);
        postorder(root->right);
        cout << root.data << " ";
    }
}

void inOrder(Node *root) {
    if (root){ 
        inOrder(root->left);
        cout << root.data << " ";
        inOrder(root->right);
    }
}

