queue<int> s;
    
void leftPushPreorder(TreeNode* root)
{
    if (root == NULL)
        return;
    
    s.push(root->val);
    leftPushPreorder(root->left);
    leftPushPreorder(root->right);
}

void rightPopPreorder(TreeNode* root)
{
    if (root == NULL)
    {
        if (s.front();
        s.pop();
        return;
    }
    int leftSubtree = s.front();
    s.pop();
    if (leftSubtree != root->val)
        return;
    
    rightPopPreorder(root->right);
    rightPopPreorder(root->left);
    
}

bool isSymmetric(TreeNode* root) {
    leftPushPreorder(root);
    rightPopPreorder(root);
    return (s.empty());
}