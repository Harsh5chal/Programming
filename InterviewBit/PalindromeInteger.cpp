If(A<0) return false;
int divisor = 1;
while (A/divisor >= 10)
    divisor *=10;
while(n!=0)
{

    int first = A/divisor;
    int last = A  % 10;
    if(first != last)
        return false;

    A = (A%divisor)/10;
    divisor = divisor/100;

}
return true;
