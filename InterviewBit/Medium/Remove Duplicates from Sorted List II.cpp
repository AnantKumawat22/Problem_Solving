if (!A)
    return A;
if (!A->next)
    return A;

ListNode *pre = A, *t = A->next, *head, *newptr;
ListNode *ptr = new ListNode(0);
int flag = 0;
head = ptr;
while (t != NULL)
{
    if (pre->val != t->val)
    {
        if (flag == 0)
        {
            newptr = new ListNode(pre->val);
            ptr->next = newptr;
            ptr = newptr;
        }
        pre->next = t;
        pre = t;
        flag = 0;
    }
    else
    {
        flag = 1;
    }
    t = t->next;
}
if (flag == 0)
{
    newptr = new ListNode(pre->val);
    ptr->next = newptr;
}

return head->next;