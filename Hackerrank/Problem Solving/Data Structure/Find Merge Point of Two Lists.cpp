int findMergeNode(SinglyLinkedListNode *head1, SinglyLinkedListNode *head2)
{
    int l1 = 0, l2 = 0;
    SinglyLinkedListNode *p = head1, *q = head2;

    while (p)
    {
        p = p->next;
        l1++;
    }
    while (q)
    {
        q = q->next;
        l2++;
    }
    p = head1;
    q = head2;

    if (l1 > l2)
        while (l1 - l2)
        {
            p = p->next;
            l2++;
        }
    else
        while (l2 - l1)
        {
            q = q->next;
            l1++;
        }

    while (p != q)
    {
        p = p->next;
        q = q->next;
    }
    return p->data;
}