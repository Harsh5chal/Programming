struct ListNode *current = A;
struct ListNode *prev = NULL;
struct ListNode *next;

while(current!=NULL)
{
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
}

A=prev;
return A;
