vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target){
    vector<pair<int, int>> vect;
    Node *last = head, *start = head;
    
    while(last->next) last = last->next;
    
    while(start->data < last->data){
        if((start->data + last->data) == target){
            vect.push_back({start->data, last->data});
            start = start->next; last = last->prev;
        } 
        else if((start->data + last->data) > target) 
            last = last->prev;
        else start = start->next;
    }
    return vect;
}