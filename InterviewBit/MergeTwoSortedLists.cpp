ListNode* Solution::mergeTwoLists(ListNode* t1, ListNode* t2) {
    ListNode* head;
if(t2->val < t1->val)
{
    head = t2;
    t2=t2->next;
}
else{
    head = t1;
    t1=t1->next;
}
ListNode* temp = head;
while(t1&&t2)
{
    if(t1->val < t2->val)
    {
        temp->next=t1;
        t1=t1->next;
    }
    else
    {
       temp->next=t2;
        t2=t2->next;
    }
    temp = temp->next;
}
if(t1) temp->next=t1;
if(t2) temp->next=t2;
return head;
}
