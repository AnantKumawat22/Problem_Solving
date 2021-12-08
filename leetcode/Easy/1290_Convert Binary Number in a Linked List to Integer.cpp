ListNode *p = head;
int dec = 0, count = 0;
long long base;
while (p != NULL)
{
    p = p->next;
    count++;
}
base = count - 1;
p = head;
while (p != NULL)
{
    dec = dec + (p->val * pow(2, base));
    base -= 1;
    p = p->next;
}
return dec;