// First I had made 3 pointers, <odd> that will track odd linked list, <even> that will track even linked list and last pointer <link> which will help to link odd linked list to even linked list.

// so first I have pointed <odd> to first node i.e odd node, <even> to second node i.e even node.

// And <link> to second node i.e first even node.

// Now I have started while loop having condition (even && even→next) becz even is in front of odd so first even pointer will face when we get NULL.

// Inside while loop I have linked odd node to second odd node like, 1→2→3→4, so first line will do 1→3, at this time 2 will also pointing 3 so we have no issue to access the upcoming 4.

// Now, in second line I have Linked even node with its second even node like, 1→2→3→4, so second line will do 2→4.

// Then we will move our both pointers one step forward, means first odd is pointing 1 now it will point 3 becz 1 to 3 is linked and we have to link further.

// And same reason for even pointer also it will point 4 now to join other remaining even node in linked list.

// And at last odd pointer will be pointing to the last node of odd linked list, and then we can link that odd linked list to even linked list by ( odd→next = link ).


void rearrangeEvenOdd(Node *head)
{
    Node *odd = head, *even = head->next, *link = head->next;

    while (even && even->next)
    {
        odd->next = odd->next->next;
        even->next = even->next->next;
        odd = odd->next;
        even = even->next;
    }
    odd->next = link;
}