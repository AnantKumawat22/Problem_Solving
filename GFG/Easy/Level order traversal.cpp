vector<int> levelOrder(Node *node)
{
    Node *temp;
    queue<Node *> q;
    vector<int> vect;

    if (!node)
        return vect;
    q.push(node);

    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        vect.push_back(temp->data);
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
    return vect;
}