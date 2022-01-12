TreeNode* leftRight(TreeNode* root)
{
    if (root == NULL)
        return NULL;
    
    TreeNode *left, *right;
    left = leftRight(root->left);
    right = leftRight(root->right);
    
    return root;
}

bool isSymmetric(TreeNode* root) {
    .
}