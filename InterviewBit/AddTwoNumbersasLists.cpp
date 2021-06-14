ListNode *d = new ListNode(-1);
ListNode *tmp = d;
int c = 0;

while(A!==NULL || B!==NULL || c)
{
    int sum = 0;
    if(A!=NULL)
    {
        sum = sum + A->val;
        A = A->next;
    }
    if(B!=NULL)
    {
        sum = sum + B->val;
        B = B->next;
    }
     sum = sum + c
c = sum/10;
ListNode *final = new ListNode(sum%10);
tmp->next = final;
tmp = tmp->next;
}
return d->next;
