DoublyLinkedListNode *sortedInsert(DoublyLinkedListNode *llist, int data)
{
    DoublyLinkedListNode *p = llist, *ptr = new DoublyLinkedListNode(data);
    if (!llist)
        return ptr;
    if (llist->data > data)
    {
        ptr->next = llist;
        llist->prev = ptr;
        return ptr;
    }
    while (p->next && p->data <= data)
        p = p->next;
    if (p->data > data)
    {
        ptr->prev = p->prev;
        p->prev->next = ptr;
        ptr->next = p;
        p->prev = ptr;
    }
    else
    {
        p->next = ptr;
        ptr->prev = p;
    }
    return llist;
}