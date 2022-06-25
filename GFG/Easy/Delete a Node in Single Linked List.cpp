Node *deleteNode(Node *head, int x)
{
    Node *p = head, *q = head->next;

    if (x == 1)
        return head->next;

    x -= 2;
    while (x--)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    delete (q);
    return head;
}