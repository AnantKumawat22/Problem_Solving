Node *prev = NULL;
bool checkBST(Node *root)
{
    if (root)
    {
        if (!checkBST(root->left))
            return false;
        if (prev && root->data <= prev->data)
            return false;

        prev = root;
        return checkBST(root->right);
    }
    else
        return true;
}