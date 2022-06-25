vector<int> preOrder(Node *root)
{
    vector<int> vect;
    stack<Node *> st;
    Node *temp = root;

    if (!root)
        return vect;
    st.push(root);

    while (!st.empty())
    {
        temp = st.top();
        st.pop();
        vect.push_back(temp->data);

        if (temp->right)
        {
            st.push(temp->right);
        }
        if (temp->left)
        {
            st.push(temp->left);
        }
    }
    return vect;
}