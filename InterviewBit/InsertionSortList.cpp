ListNode* Solution::insertionSortList(ListNode* head) {
if(!head->next)
    return head;

ListNode* temp=head;
ListNode* sorted=NULL;

while(temp)
{
    ListNode* curr= temp;
    temp=temp->next;

    if(!sorted || sorted->val > curr->val)
    {
        curr->next  = sorted;
        sorted = curr;
    }
    else
  {
            //to check next value s is any temp var
        ListNode* s = sorted;
    while(s)
    {
        if(!s->next || s->next->val > curr->val)
        {
            curr->next=s->next;
            s->next=curr;
            break;
        }
        s=s->next;
    }
  }
}
return sorted;
}
