int count = 0;
     struct Node *p = head;
     while(p != NULL){
         p = p->next;
         count++;
     }
     if(count%2 == 0) return 0;
     else 1;