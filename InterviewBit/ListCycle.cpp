if(head==NULL || head->next ==Null)
    return head;

    ListNode *slow = head;
    ListNode *fast = head;

    slow = slow->next;
    fast = fast->next->next;

    while(fast && fast->next)
    {
        if(slow=fast)
            bread;
        slow=slow->next;
        fast=fast->next->next;
    }

    if(slow!=fast)
        return NULL;
    slow = head;
    while(slow!=fast)
    {
        slow=slow->next;
        fast = fast->next;
    }
    return slow;
