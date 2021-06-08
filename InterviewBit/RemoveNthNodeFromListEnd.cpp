int count = 0;
ListNode* temp = head;
while(temp)
{
    temp=temp->next;
    count++;
}

int del_index = count-n;
if(count==1) return NULL;
if(n>=count) return head->next;
temp=head;
for(int i = 1;i<del_index;i++)
    temp=temp->next;
    temp->next = temp->next->next;
    return head;
