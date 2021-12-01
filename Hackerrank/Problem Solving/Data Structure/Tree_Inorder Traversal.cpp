if (root != NULL)
{
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
return;