int getNthFromLast(Node *head, int n)
{
    Node *ptr = head, *p = head;
    while (ptr && n--)
        ptr = ptr->next;
    if (n > 0)
        return -1;
    while (ptr)
    {
        ptr = ptr->next;
        p = p->next;
    }
    return p->data;
}