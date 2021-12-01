SinglyLinkedListNode *p = llist, *q;
if (position == 0)
{
    llist = p->next;
    delete (p);
    return llist;
}
position--;

while (position--)
{
    p = p->next;
}
q = p->next;
p->next = q->next;
delete (q);
return llist;