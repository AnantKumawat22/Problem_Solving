int size(ListNode *llist)
{
    int len = 0;
    while (llist)
    {
        llist = llist->next;
        len++;
    }
    return len;
}
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    ListNode *first = headA, *second = headB;
    int len1 = size(headA), len2 = size(headB), i = 0;

    if (len1 > len2)
        while (i < (len1 - len2))
        {
            first = first->next;
            i++;
        }
    else if (len1 < len2)
        while (i < (len2 - len1))
        {
            second = second->next;
            i++;
        }

    while (first && second)
    {
        if (first == second)
            return first;
        first = first->next;
        second = second->next;
    }
    return NULL;
}