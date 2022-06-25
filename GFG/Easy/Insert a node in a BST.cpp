/// Iterative Approach.
Node *insert(Node *root, int Key)
{
    Node *prev = NULL;
    Node *ptr = new Node(Key);
    if (!root)
        return ptr;

    while (root)
    {
        prev = root;
        if (root->data == Key)
            return root;
        if (root->data > Key)
            root = root->left;
        else
            root = root->right;
    }

    if (prev->data > Key)
        prev->left = ptr;
    else
        prev->right = ptr;
    return root;
}


// Recursive Approach.
Node* insert(Node* root, int Key) {
    if(!root) return new Node(Key);
    
    if(root->data == Key) return root;
    else if(root->data > Key) root->left = insert(root->left, Key);
    else root->right = insert(root->right, Key);
    return root;
}