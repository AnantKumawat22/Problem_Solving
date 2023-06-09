ListNode *fr, *lk, *r;
fr = r = head;
while (n--)
    fr = fr->next;
if (!fr)
    return r->next;
while (fr->next)
{
    fr = fr->next;
    r = r->next;
}
lk = r->next;
r->next = lk->next;
delete (lk);
return head;