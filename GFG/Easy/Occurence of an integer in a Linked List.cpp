struct node* ptr = head;
int count = 0;
while(ptr != NULL){
    if(ptr->data == search_for) count++;
    ptr = ptr->next;
}
return count;