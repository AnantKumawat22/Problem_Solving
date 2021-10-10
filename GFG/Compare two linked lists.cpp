Node* ptr = list1;
Node* q = list2;

while(ptr != NULL && q != NULL){
    if(ptr->c > q->c) return 1;
    else if(ptr->c < q->c) return -1;
    ptr = ptr->next;
    q = q->next;
}
if(ptr != NULL) return 1;
if(q != NULL) return -1;

return 0;