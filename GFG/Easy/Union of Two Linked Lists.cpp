struct Node *makeUnion(struct Node *head1, struct Node *head2)
{
    struct Node *p = head1, *newptr, *llist;
    struct Node *ptr = new Node(0);
    llist = ptr;
    map<int, int> omap;

    while (p)
    {
        omap[p->data]++;
        p = p->next;
    }
    p = head2;
    while (p)
    {
        omap[p->data]++;
        p = p->next;
    }
    for (auto i : omap)
    {
        if (i.second != -1)
        {
            newptr = new Node(i.first);
            ptr->next = newptr;
            ptr = ptr->next;
        }
        i.second = -1;
    }
    return llist->next;
}