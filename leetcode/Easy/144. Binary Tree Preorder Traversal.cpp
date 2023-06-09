void preorder(TreeNode *root, vector<int> &vect)
{
    if (root != NULL)
    {
        vect.push_back(root->val);
        preorder(root->left, vect);
        preorder(root->right, vect);
    }
}
vector<int> preorderTraversal(TreeNode *root)
{
    vector<int> vect;
    preorder(root, vect);
    return vect;
}