DoublyLinkedListNode *reverse(DoublyLinkedListNode *llist)
{
    if (!llist || !llist->next)
        return llist;

    DoublyLinkedListNode *p = llist, *q = llist->next, *r = NULL;
    while (q)
    {
        p->next = r;
        p->prev = q;
        r = p;
        p = q;
        q = q->next;
    }
    p->next = r;
    p->prev = q;
    llist = p;
    return llist;
}