ListNode *ptr = new ListNode();
ListNode *head = ptr;

while (list1 != NULL && list2 != NULL)
{
    if (list1->val < list2->val)
    {
        ptr->next = list1;

        list1 = list1->next;
    }
    else
    {
        ptr->next = list2;
        list2 = list2->next;
    }
    ptr = ptr->next;
}
if (list1 != NULL)
    ptr->next = list1;
else
    ptr->next = list2;
return head->next;