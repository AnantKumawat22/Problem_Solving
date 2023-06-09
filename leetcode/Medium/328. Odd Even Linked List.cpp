ListNode *oddEvenList(ListNode *head)
{
    ListNode *p, *q, *llist;
    if (!head || !head->next)
        return head;
    p = head;
    q = head->next;
    llist = head->next;

    while (p->next && q->next)
    {
        p->next = p->next->next;
        q->next = q->next->next;
        p = p->next;
        q = q->next;
    }
    p->next = llist;
    return head;
}