struct ListNode *FindMiddle(struct ListNode *head)
{
    struct ListNode *p1,*p2;
    p1=p2=head;
    int count =0;

    while(p1->next!=NULL)
    { if(i==0)
    {
         p1=p1->next;
        count = 1;
    }
     else if(i==1)
     {
         p1=p1->next;
         p2=p2->next;
         i=0;
     }
    }
    return p2;

};
