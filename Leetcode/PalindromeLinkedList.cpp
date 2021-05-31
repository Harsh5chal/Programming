class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *fast = head;
ListNode *slow = head;

while(fast->next !=NULL && fast->next->next !=NULL)
{
    fast = fast->next->next;
    slow = slow->next;
}

ListNode *prev = NULL;
ListNode *curr = slow->next;
ListNode *nex = NULL;

while(curr!=NULL)
{
    nex = curr->next;
    curr->next = prev;
    prev = curr;
    curr = nex;
}

while(prev!=NULL)
{
    if(head->val != prev->val)
    {
        return false;
    }
    head = head->next;
    prev = prev->next;
}
return true;
    }
};
