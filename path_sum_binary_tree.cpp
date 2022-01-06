vector<vector<int>> sol;
    
void helper(TreeNode* root, deque<TreeNode*>& path, int targetSum)
{
    if (root == NULL)
        return;
    
    if (root->left || root->right)
    {
        path.push_back(root);
        if (root->left)
            helper(root->left, path, targetSum - root->val);
        if (root->right)
            helper(root->right, path, targetSum - root->val);
        
        path.pop_back();
    }
    else if (targetSum == root->val)
    {
        path.push_back(root);
        
        vector<int> v;
        for (auto it = path.begin(); it != path.end(); ++it)
            v.push_back((*it)->val);
        
        sol.push_back(v);
        
        path.pop_back();
    }

}

// return all paths of root-to-leaf whose path sum is targetSum
vector<vector<int>> pathSum(TreeNode* root, int targetSum)
{
    deque<TreeNode*> path;
    helper(root, path, targetSum);
    return sol;
}