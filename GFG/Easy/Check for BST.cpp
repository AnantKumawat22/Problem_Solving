Node *prev = NULL;
bool isBST(Node *root)
{
    if (root)
    {
        if (!isBST(root->left))
            return false;
        if (prev != NULL && root->data <= prev->data)
            return false;

        prev = root;
        return isBST(root->right);
    }
    else
        return true;
}