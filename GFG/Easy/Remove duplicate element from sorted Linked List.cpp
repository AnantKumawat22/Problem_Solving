if (!head)
    return head;
if (!head->next)
    return head;

Node *pre = head, *t = head->next;

while (t != NULL)
{
    if (pre->data != t->data)
    {
        pre->next = t;
        pre = t;
    }
    t = t->next;
}
pre->next = NULL;
return head;