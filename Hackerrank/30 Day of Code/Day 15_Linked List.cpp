Node *ptr = head;
Node *newptr = new Node(data);
if (head == NULL)
{
    head = newptr;
    return head;
}
while (ptr->next != NULL)
{
    ptr = ptr->next;
}
ptr->next = newptr;
return head;