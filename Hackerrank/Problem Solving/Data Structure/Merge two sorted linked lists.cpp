SinglyLinkedListNode *mergeLists(SinglyLinkedListNode *head1, SinglyLinkedListNode *head2)
{
    SinglyLinkedListNode *p = head1, *q = head2, *llist;
    SinglyLinkedListNode *ptr = new SinglyLinkedListNode(0);
    llist = ptr;
    while (p && q)
    {
        if (p->data > q->data)
        {
            ptr->next = q;
            q = q->next;
        }
        else
        {
            ptr->next = p;
            p = p->next;
        }
        ptr = ptr->next;
    }
    if (p != NULL)
        ptr->next = p;
    else
        ptr->next = q;

    return llist->next;
}