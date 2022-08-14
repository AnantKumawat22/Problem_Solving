bool isPalindrome(ListNode* head) {
    if(!head || !head->next) return true;
    if(!head->next->next){
        if(head->val == head->next->val) return true;
        else return false;
    }
    ListNode *slow = head, *fast = head, *prev, *curr, *front;
    
    while(fast && fast->next){
        slow = slow->next; fast = fast->next->next;
    }
    
    prev = slow; curr = slow->next; 
    front = curr->next; prev->next = NULL;
    while(front){
        curr->next = prev; prev = curr;
        curr = front; front = front->next;
    }
    curr->next = prev;
    while(head != slow){
        if(head->val == curr->val){
            curr = curr->next; head = head->next;
        }
        else return false;
    }
    return true;
}