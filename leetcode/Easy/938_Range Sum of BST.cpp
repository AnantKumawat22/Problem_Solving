int sum = 0;

void preOrder(TreeNode *root, int low, int high)
{
    if (root)
    {
        if (root->val >= low && root->val <= high)
            sum += root->val;
        preOrder(root->left, low, high);
        preOrder(root->right, low, high);
    }
}
int rangeSumBST(TreeNode *root, int low, int high)
{
    preOrder(root, low, high);
    return sum;
}