    int height(Node* root) {
        if (root == NULL) return -1;
        else {
            int l_max = height(root->left);
            int r_max = height(root->right);
            
            if(l_max > r_max) return l_max+1;
            else return r_max+1;
        }
    }
