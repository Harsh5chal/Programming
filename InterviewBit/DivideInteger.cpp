int Solution::divide(int A, int B) {
    if(A==INT_MIN&&B==-1)
    return INT_MAX;
    long long int a = A,b = B;
    int sign = ((A<0)^(B<0)) ? -1:1;
    a = abs(a);
    b = abs(b);

int quotient = 0;
while(a>=b)
{
    a=a-b;
    ++quotient;
}

return sign*quotient;
}
