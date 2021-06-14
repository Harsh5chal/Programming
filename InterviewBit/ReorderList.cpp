ListNode* middlehead(ListNode* head)
{
    ListNode* slow = head,*fast = head;
    while(fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast ->next->next;
    }
    fast = slow->next;
    slow->next = NULL;
    return fast;
}

ListNode* reverse(ListNode* head)
{
    ListNode* prev = NULL,*cur = head,*fur=head;
    while(fur)
    {
        fur = fur->next;
        cur->next = prev;
        prev = cur;
        cur= fur;
    }
    return prev;
}

ListNode* mergealternate(ListNode* t1,ListNode* t2)
{
    ListNode* head = t1;
    ListNode* prev=t1;
    t1=t1->next;
    while(t1&&t2)
    {
        prev->next = t2;
        t2=t2->next;
        prev=prev->next;

        prev->next = t1;
        t1=t1->next;
        prev = prev->next;
    }
    if(t1) prev->next = t1;
    if(t2) prev->next = t2;
    return head;
}

ListNode* Solution::reorderList(ListNode* head)
{
    ListNode* req = middlehead(head);
    req = reverse(req);
    return mergealternate(head,req);
}
