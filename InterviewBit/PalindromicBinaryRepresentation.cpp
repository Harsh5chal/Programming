//expert
int len = 1;
int count = 1;

while(count <A)
{
    len++;
    count += 1<<(len-1)/2;
}

count -= (1<<(len-1)/2);
int offset = A-count-1;

int ans = 1<<(len-1);
ans |= offset<<(len/2);

offset = ans>>(len)/2;
int reverse = 0;

while(offset)
{
    reverse = reverse <<1;
    reverse |= offset&1;
    offset = offset>>1;
}

ans |= reverse;
return ans;
