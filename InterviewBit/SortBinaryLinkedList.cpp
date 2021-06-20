ListNode* Solution::solve(ListNode* A) {
    ListNode *i = A;
ListNode *j = A;

while(j!= NULL)
{
    if(i->val!=1){
        i=i->next;
    }
    else if(i->val==1 and j->val==0)
    {
        int temp = i->val;
        i->val = j->val;
        j->val = temp;
        i=i->next;
    }
    j=j->next;
}
return A;
}

//other sol

ListNode* Solution::solve(ListNode* A)
{
    if(!A) return A;
    ListNode *head = A, *prev = A, *temp = A->next;
    while(temp)
    {
        if(temp->val == 1)
        {
            prev = prev->next;
            temp = temp->next;
        }
        else
        {
            prev->next = temp->next;
            temp->next = head;
            head = temp;
            temp = prev->next;
        }
    }
    return head;
}
