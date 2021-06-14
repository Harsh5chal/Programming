//1(p1)(p2)-2-3-4-5
 ListNode *p1 = head;
 ListNode *p2 = head;

 int midpos = 0;
 while(p2 && p2->next)
 {
     p1 = p1->next; //1(p2)-2(p1)-3-4-5
     p2 = p2->next->next; //1-2(p1)-3(p2)-4-5
     midpos++;//1 then again 1-2-3(p1)-4-5(p2) count(2)
 }

 if(midpos<B)
    return -1;

ListNode *again = head;
int count = midpos-B;

for(int i = 0;i<count;i++)
{
    again = again->next; //stop at 2
}

return again->val;

