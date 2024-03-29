ListNode *detectCycle(ListNode *head) {
    ListNode *slow = head, *fast = head, *temp = head;
    
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) break;
    }
    if(!fast || !fast->next) return NULL;
    while(temp != slow){
        slow = slow->next;
        temp = temp->next;
    }
    return temp;
}

YouTube :- https://youtu.be/Cs3KwAsqqn4 