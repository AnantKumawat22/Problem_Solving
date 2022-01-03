ListNode *reverseList(ListNode *head)
{
    ListNode *pre = NULL, *curr = head, *rear;

    if (!head)
        return head;
    rear = head->next;

    while (rear)
    {
        curr->next = pre;
        pre = curr;
        curr = rear;
        rear = rear->next;
    }
    curr->next = pre;
    return curr;
}