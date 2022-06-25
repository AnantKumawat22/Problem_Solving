Node *ptr = NULL;
int flag = 1, res = 1;

bool isPalindrome(Node *head)
{
    if (flag)
    {
        ptr = head;
        flag = 0;
    }
    if (head)
    {
        isPalindrome(head->next);
        if (head->data == ptr->data)
            ptr = ptr->next;
        else
            res = 0;
    }
    return res;
}