
unsigned int count = sizeof(A)*8-1;
unsigned int reverse = A;

A>>=1;
while(A)
{
    reverse <<= 1;
    reverse |= A&1;
    A>>=1;
    count--;
}
reverse <<= count;
return reverse;
