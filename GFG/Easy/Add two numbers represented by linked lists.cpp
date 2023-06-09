class Solution
{
    public:
    struct Node* reverse(struct Node* head){
        struct Node* prev = NULL, *curr = head, *forw = head->next;
        while(curr){
            curr->next = prev; prev = curr;
            curr = forw; if(forw) forw = forw->next;
        }
        return prev;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second){
        struct Node* head = new Node(0), *p = head;
        int carry = 0, A, B;
    
        first = reverse(first);
        second = reverse(second);
        
        while(first || second || carry){
            if(!first) A = 0;
            else{ A = first->data; first = first->next; }
            
            if(!second) B = 0;
            else{ B = second->data; second = second->next; }
            
            p->next = new Node((A + B + carry) % 10);
            carry = (A + B + carry) / 10;
            p = p->next;
        }
        head = reverse(head->next);
        return head;
    }
};