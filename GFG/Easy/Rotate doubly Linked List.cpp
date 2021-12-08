struct node* ptr = start;
struct node* q = start;

while(ptr->next != NULL){
    ptr = ptr->next;
}

while(p--){
    ptr->next = start;
    start->prev = ptr;
    start = start->next;
    q->next = NULL;
    ptr = q;
    q = start;
}
return start;