Node *deleteAllOccurances(Node *head, int x)
{
    Node *p = head, *q;
    if (!head)
        return head;
    q = head->next;

    while (head->data == x)
        head = head->next;
    while (q)
    {
        if (q->data != x)
        {
            p->next = q;
            p = p->next;
        }
        q = q->next;
    }
    p->next = q;
    return head;
}