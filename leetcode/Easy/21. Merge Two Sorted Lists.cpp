ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode *dummy = new ListNode(0);
    ListNode *ptrl1 = list1, *ptrl2 = list2, *dyptr = dummy;
    
    if(!list1 && !list2) return NULL;
    while(ptrl1 && ptrl2){
        if(ptrl1->val < ptrl2->val){
            dyptr->next = ptrl1;
            dyptr = ptrl1;
            ptrl1 = ptrl1->next;
        }
        else {
            dyptr->next = ptrl2;
            dyptr = ptrl2;
            ptrl2 = ptrl2->next;
        }
    }
    if(ptrl1) dyptr->next = ptrl1;      
    if(ptrl2) dyptr->next = ptrl2;
    
    return dummy->next;
}