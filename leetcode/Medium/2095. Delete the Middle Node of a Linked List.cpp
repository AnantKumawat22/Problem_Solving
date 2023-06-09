ListNode *deleteMiddle(ListNode *head)
{
    ListNode *fast, *lk, *slow;
    fast = lk = slow = head;
    if (!head->next)
    {
        head = NULL;
        return head;
    }
    while (fast && fast->next)
    {
        if (fast != head)
            slow = slow->next;
        fast = fast->next->next;
        lk = lk->next;
    }
    slow->next = lk->next;
    delete (lk);
    return head;
}