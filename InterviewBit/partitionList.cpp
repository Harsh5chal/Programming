ListNode *l1 = A;
ListNode *l2 = A;
ListNode *p1 = A;
ListNode *p2 = A;
ListNode *i = A;

l1 = p1 = new ListNode(0);
l2 = p2 = new ListNode(0);

while(i!=NULL)
{
    if(i->val <B)
    {
        p1->next = i;
        p1 = p1->next;
    }
    else{
        p2->next = i;
        p2 = p2->next;
    }
    i=i->next;
}
p2->next=NULL;
p1->next= l2->next;

return l1->next;
