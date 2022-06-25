bool has_cycle(SinglyLinkedListNode *head)
{
    SinglyLinkedListNode *slow = head, *fast;
    if (!head)
        return false;
    fast = head->next;

    while (fast && fast->next)
    {
        if (slow == fast)
            return true;
        else
        {
            slow = slow->next;
            fast = fast->next->next;
        }
    }
    return false;
}