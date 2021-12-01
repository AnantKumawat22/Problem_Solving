SinglyLinkedListNode *p = llist;
SinglyLinkedListNode *ptr = new SinglyLinkedListNode(data);
position--;

while (position--)
{
    p = p->next;
}
ptr->next = p->next;
p->next = ptr;
return llist;