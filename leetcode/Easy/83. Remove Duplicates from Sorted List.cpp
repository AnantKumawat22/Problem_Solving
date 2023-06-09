// Logic :-
// The logic is, prev will point the 1st node of the list and curr will point the 2nd node of list. We will move curr pointer and whenever we get the different value of prev and curr, we will link prev's node to curr's node else we will increase curr. And prev pointer stay there until we get different value.
// But at last nodes if we get same elements then curr will reach at null and loop will end. And we will be unale to remove the duplicacy on last nodes. so we will directly point prev's node to null. 


// LeetCode Solution Link :- https://leetcode.com/problems/remove-duplicates-from-sorted-list/solutions/1805781/c-time-o-n-space-o-1-83-remove-duplicates-from-sorted-list/

ListNode* deleteDuplicates(ListNode* head) {
    if(!head) return head;
    ListNode* prev = head, *curr = head->next, *leak = NULL;

    while(curr){
        if(prev->val != curr->val){
            prev->next = curr;
            prev = prev->next;
            curr = curr->next;
        } else{
            leak = curr;
            curr = curr->next;
            delete leak;
        }
    }
    prev->next = NULL;
    return head;
}