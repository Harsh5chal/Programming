#include<list>
struct ListNode* findNthFromEnd(struct ListNode* head, int n) {
   struct ListNode* nth = NULL;
   struct ListNode* temp = head;
   int count = 1;
for(int count = 1; count<n;count++)
{
    if(temp)
    temp = temp->next;
}

while(temp)
{
    if(n == NULL)
    nth = head;
    else
    nth = nth->next;
temp = temp->next;
}
if(n)
return nth;
return NULL;
}
