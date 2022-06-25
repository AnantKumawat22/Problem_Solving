int size(Node *llist)
{
    int len = 0;
    while (llist)
    {
        len++;
        llist = llist->next;
    }
    return len;
}

int intersectPoint(Node *head1, Node *head2)
{
    Node *first = head1, *second = head2;
    int len1, len2, i = 0;
    len1 = size(head1);
    len2 = size(head2);

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
            return first->data;
        first = first->next;
        second = second->next;
    }
    return -1;
}