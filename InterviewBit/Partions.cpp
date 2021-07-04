int sum = 0;
for(int i = 0 ;i<A;i++)
    sum = sum + B[i];
if(sum%3 != 0)
    return 0;
sum /= 3;

int s = 0;
int count  = 0;
int left = 0;

for(int i = 0; i < A-1;i++)
{
    s = s+ B[i];

    if(s == (2*sum))
        count  = count + left;
    if(sum == s)
        left++;
}
return count;
