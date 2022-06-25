// Recursive Approach.
Node *insert(Node *root, int data)
{
    if (!root)
        return new Node(data);
    if (root->data == data)
        return root;
    else if (root->data > data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);
    return root;
}

// Iterative Approach.
Node *insert(Node *root, int data)
{
    Node *prev = NULL, *newroot = root;
    Node *ptr = new Node(data);
    if (!root)
        return ptr;

    while (root)
    {
        prev = root;
        if (root->data == data)
            return root;
        else if (root->data > data)
            root = root->left;
        else
            root = root->right;
    }
    if (prev->data > data)
        prev->left = ptr;
    else
        prev->right = ptr;
    return newroot;
}
