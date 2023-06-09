ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *p, *q, *head, *newptr;
    ListNode *ptr = new ListNode();
    int i, j, r, carry = 0, sum = 0, num1, num2;

    head = ptr;
    p = l1;
    q = l2;

    while (p || q || carry)
    {
        if (p)
        {
            num1 = p->val;
            p = p->next;
        }
        else
            num1 = 0;

        if (q)
        {
            num2 = q->val;
            q = q->next;
        }
        else
            num2 = 0;

        sum = num1 + num2 + carry;
        r = sum % 10;
        newptr = new ListNode(r);
        ptr->next = newptr;
        ptr = newptr;
        carry = sum / 10;
    }
    return head->next;
}