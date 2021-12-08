Node *ptr = head;
Node *q = head->next;
while(ptr != NULL){
    ptr->next = ptr->prev;
    ptr->prev = q;
    if(q == NULL) break;
    ptr = q;
    q = q->next;
}
head = ptr;
return head;