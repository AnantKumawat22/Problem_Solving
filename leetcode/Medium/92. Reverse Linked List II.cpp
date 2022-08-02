ListNode* reverseBetween(ListNode* head, int left, int right) {
    if(left == right) return head;
    ListNode *prev = head, *curr, *forw, *ptr = head, *ptr1;
    int i = right - left, l = left;
    
    while(left > 2){ ptr = ptr->next; left--; }
    
    if(l != 1) prev = ptr->next;
    curr = prev->next;
    forw = curr->next;
    ptr1 = prev;
    
    while(i > 0){
        curr->next = prev;
        prev = curr;
        curr = forw;
        if(forw) forw = forw->next;
        i--;
    }
    if(l == 1){ ptr->next = curr; return prev; }
    
    ptr->next = prev;
    ptr1->next = curr;
    return head;
}