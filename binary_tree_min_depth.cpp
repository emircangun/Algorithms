int minDepth(TreeNode* root)
{
    if (root == NULL)
        return 0;
    
    int left, right;
    left = 1 + minDepth(root->left);
    right = 1 + minDepth(root->right);
    
    if (left == 1)
        return right;
    if (right == 1)
        return left;
    
    return min(left, right);
}