SinglyLinkedListNode *p = llist, *q = NULL, *r;
if (llist->next == NULL)
    return llist;
r = p->next;
while (r != NULL)
{
    p->next = q;
    q = p;
    p = r;
    r = r->next;
}
p->next = q;
llist = p;
return llist;