unsigned int count = 0;
while(A)
{
    count += A&1;
    A>>=1;
}
return count;
