bool BSTValidator(TreeNode* root, int min, int max)
{
    if (root == NULL)
        return true;
    
    if (root->val >= max || root->val <= min)
        return false;
    
    return BSTValidator(root->left, min, root->val) &&
            BSTValidator(root->right, root->val, max);
}

bool isValidBST(TreeNode* root)
{
    return BSTValidator(root, INT_MIN, INT_MAX);
}