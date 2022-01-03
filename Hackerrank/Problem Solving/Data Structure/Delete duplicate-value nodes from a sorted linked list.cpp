SinglyLinkedListNode *removeDuplicates(SinglyLinkedListNode *llist)
{

    SinglyLinkedListNode *slow, *fast;
    slow = fast = llist;

    while (fast)
    {
        if (slow->data != fast->data)
        {
            slow->next = fast;
            slow = slow->next;
        }
        fast = fast->next;
    }
    slow->next = NULL;
    return llist;
}