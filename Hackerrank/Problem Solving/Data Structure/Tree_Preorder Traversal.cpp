if (root != NULL)
{
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
return;