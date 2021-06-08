ListNode* Solution::deleteDuplicates(ListNode* head) {
    ListNode *dummy = new ListNode(-1);
    ListNode *prev = dummy;
    dummy->next=head;
while(head !=NULL)
{
    if(head->next !=NULL && head->val == head->next->val)
    {
        while(head->next != NULL && head->val == head->next->val)
        {
            head = head->next;
        }
        prev->next = head->next;
    }
    else{
        prev = prev->next;
    }
    head = head->next;
}
return dummy->next;
}
