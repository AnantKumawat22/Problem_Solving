if (!head)
    return head;
if (!head->next)
    return head;

ListNode *pre = head, *t = head->next;

while (t != NULL)
{
    if (pre->val != t->val)
    {
        pre->next = t;
        pre = t;
    }
    t = t->next;
}
pre->next = NULL;
return head;