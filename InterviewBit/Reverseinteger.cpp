int result = 0;
while(A!=0)
{
    if(result>INT_MAX/10 || result<INT_MIN/10) return 0;
    result = (result*10) + A%10;
    A/=10;
}

return result;
