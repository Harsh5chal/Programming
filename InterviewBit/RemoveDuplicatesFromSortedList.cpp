if(A == NULL || A->next == NULL)
    return A;
if(A->val == A->next->val)
{// skip this node
    return A->next;
}
else{ // attach this node to rest of the list
    A->next = A->next;
    return A;
}

//other sol
ListNode* Solution::deleteDuplicates(ListNode* head) {

struct ListNode* current = head;
if (current == NULL)
return head;
while (current->next != NULL)
{
if (current->val == current->next->val)
current->next = current->next->next;
else
current = current->next;
}
return head;
}
