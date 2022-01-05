void RBTree::RBTreeFix(Node* z)
{
    while (z->parent && z->parent->color == RED)
    {
        Node* father = z->parent;
        Node* grandfather = z->parent->parent;
        if (grandfather == NULL)
            break;

        if (father == grandfather->left)
        {
            Node* uncle = grandfather->right;
            if (uncle && uncle->color == RED)
            {
                father->color = BLACK;
                uncle->color = BLACK;
                grandfather->color = RED;
                z = grandfather;
            }
            else 
            {
                if (z == father->right)
                {
                    z = father;
                    leftRotate(z);
                }
                
                z->parent->color = BLACK;
                z->parent->parent->color = RED;
                rightRotate(z->parent->parent);
            }
        }
        else 
        {
            Node* uncle = grandfather->left;
            if (uncle && uncle->color == RED)
            {
                father->color = BLACK;
                uncle->color = BLACK;
                grandfather->color = RED;
                z = grandfather;
            }
            else 
            {
                if (z == father->left)
                {
                    z = father;
                    rightRotate(z);
                }
                
                z->parent->color = BLACK;
                z->parent->parent->color = RED;
                leftRotate(z->parent->parent);
            }
        }
    }

    root->color = BLACK;
}