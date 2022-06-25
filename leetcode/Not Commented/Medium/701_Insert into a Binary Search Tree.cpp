// Recursive Approach.
TreeNode *insertIntoBST(TreeNode *root, int val)
{
    if (!root)
        return new TreeNode(val);
    if (root->val > val)
        root->left = insertIntoBST(root->left, val);
    else
        root->right = insertIntoBST(root->right, val);
    return root;
}



// Iterative Approach.
TreeNode *insertIntoBST(TreeNode *root, int val)
{
    TreeNode *prev = NULL, *newroot = root;
    TreeNode *ptr = new TreeNode(val);
    if (!root)
        return ptr;

    while (root)
    {
        prev = root;
        if (root->val > val)
            root = root->left;
        else
            root = root->right;
    }

    if (prev->val > val)
        prev->left = ptr;
    else
        prev->right = ptr;
    return newroot;
}