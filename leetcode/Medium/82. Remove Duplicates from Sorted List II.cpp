if (!head)
    return head;
if (!head->next)
    return head;

ListNode *pre = head, *t = head->next, *newhead, *newptr;
ListNode *ptr = new ListNode(0);
int flag = 0;
newhead = ptr;
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

return newhead->next;