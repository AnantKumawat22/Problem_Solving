
ListNode *fr, *r;
fr = r = head;
int temp = k - 1;
k--;
while (k--)
    fr = fr->next;
while (fr->next)
{
    fr = fr->next;
    r = r->next;
}
fr = head;
while (temp--)
    fr = fr->next;

temp = fr->val;
fr->val = r->val;
r->val = temp;
return head;