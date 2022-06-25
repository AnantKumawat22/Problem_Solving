TreeNode *prev = NULL;
bool isValidBST(TreeNode *root)
{
    if (root)
    {
        if (!isValidBST(root->left))
            return false;
        if (prev != NULL && root->val <= prev->val)
            return false;

        prev = root;
        return isValidBST(root->right);
    }
    else
        return true;
}