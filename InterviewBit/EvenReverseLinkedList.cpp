ListNode *odd = head;
if(odd == NULL || odd->next == NULL || odd->next->next == NULL)
{
    return odd;
}

ListNode *even = NULL;

while(odd && odd->next)
{
    ListNode *temp = odd->next;
    odd->next = temp->next;
    temp->next = even;
    even = temp;
    odd = odd->next;
}
odd = head;
while(even)
{
    ListNode *temp = even->next;
    even->next = odd->next;
    odd->next = even;
    odd = odd->next->next;
    even = temp;
}
return head;
