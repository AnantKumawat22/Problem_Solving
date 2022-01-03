void deleteNode(ListNode *node)
{
    ListNode *ptr = node->next;
    while (ptr->next)
    {
        node->val = ptr->val;
        ptr = ptr->next;
        node = node->next;
    }
    node->val = ptr->val;
    node->next = NULL;
    delete (ptr);
}