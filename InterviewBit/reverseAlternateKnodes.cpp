ListNode* Solution::solve(ListNode* A, int B) {
    ListNode *curr = A;
    ListNode *next;
    ListNode *prev = NULL;
    ListNode *new_head;

    for(int i = 0;i<B;i++)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    new_head = prev;

    A->next = curr;

    if(curr==NULL) return new_head;

    for(int i = 0;i<B-1;i++)
    {
        curr = curr->next;
    }
    curr->next = solve(curr->next,B);
    return new_head;
}
