int height(Node* root) {
    if(!root) return -1;
    return (max(height(root->left), height(root->right)) + 1);
}