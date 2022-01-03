bool compare_lists(SinglyLinkedListNode *head1, SinglyLinkedListNode *head2)
{
    SinglyLinkedListNode *p = head1, *q = head2;
    while (p && q)
    {
        if (p->data == q->data)
        {
            p = p->next;
            q = q->next;
        }
        else
            return false;
    }
    if (!p && !q)
        return true;
    else
        return false;
}