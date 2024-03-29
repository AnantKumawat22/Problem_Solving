ListNode *removeElements(ListNode *head, int val)
{
    ListNode *p = head, *q, *leak;
    if (!head)
        return head;

    while (head && head->val == val)
    {
        head = head->next;
        delete (p);
        p = head;
    }
    if (!head)
        return head;

    q = head->next;
    while (q)
    {
        if (q->val == val)
        {
            p->next = q->next;
            leak = q;
            q = q->next;
            delete (leak);
        }
        else
        {
            q = q->next;
            p = p->next;
        }
    }
    return head;
}