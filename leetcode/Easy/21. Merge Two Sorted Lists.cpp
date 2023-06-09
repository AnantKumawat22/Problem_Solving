// Logic :-
// 1. The Logic is create a dummy node and check from both given list which data is less, then we will link that dummy node with the list's node with small data and point to next node of that particular list only. 
// 2. We will repeat this until any list reach at null. And finally we connect our sorted list with other list (not reached at null).


// Leetcode Solution Link:- https://leetcode.com/problems/merge-two-sorted-lists/solutions/2350155/c-21-merge-two-sorted-lists/

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* ptr1 = list1, *ptr2 = list2, *dummy = new ListNode(0);
    ListNode* srtptr = dummy;

    while(ptr1 && ptr2){
        if(ptr1->val <= ptr2->val){
            srtptr->next = ptr1;
            ptr1 = ptr1->next;
        }
        else{
            srtptr->next = ptr2;
            ptr2 = ptr2->next;
        }
        srtptr = srtptr->next;
    }
    if(ptr1) srtptr->next = ptr1;
    else srtptr->next = ptr2;
    return dummy->next; 
}