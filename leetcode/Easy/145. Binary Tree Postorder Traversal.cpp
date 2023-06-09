void postorder(TreeNode *root, vector<int> &vect)
{
    if (root != NULL)
    {
        postorder(root->left, vect);
        postorder(root->right, vect);
        vect.push_back(root->val);
    }
}
vector<int> postorderTraversal(TreeNode *root)
{
    vector<int> vect;
    postorder(root, vect);
    return vect;
}