int sign = 1;
long int num = 0;
int i = 0;

while(A[i]== ' ')
    i++;
if(A[i]=='+')
    i++;
if(A[i]=='-')
{
    sign=-1;
    i++;
}

int count = 0;
while(A[i]!=' ' && isdigit(A[i]) && count<11)
{
    num = 10*num + A[i]-'0';
    i++;
    count++;
}
if(num*sign >= INT_MAX)
    return INT_MAX;
else if(num*sign <= INT_MIN)
    return INT_MIN;
return num*sign;
