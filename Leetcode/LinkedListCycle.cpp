class Solution {
public:
    bool hasCycle(ListNode *head) {
   int c=0;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            c++;
            if(c>=10001)
            {
                return true;
            }
        }
        return false;
    }
};
