SinglyLinkedListNode *p = llist;
int len = 0;
positionFromTail++;
while (p != NULL)
{
    p = p->next;
    len++;
}
p = llist;
while (len - positionFromTail)
{
    p = p->next;
    positionFromTail++;
}
return (p->data);