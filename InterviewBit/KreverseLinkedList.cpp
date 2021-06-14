// using recursion

ListNode *prev = NULL:
ListNode *curr = head;
ListNode *further = head;
int count = 0;

while(count<k && curr)
{
    further = further->next;
    curr->next = prev;
    prev = curr;
    curr=further;
    count++;
}
if(curr)
{
    head->next = reverseList(curr, k);
}
return prev;
