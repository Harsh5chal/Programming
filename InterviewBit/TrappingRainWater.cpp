//using simple way
int n = A.size();
int res = 0;

if(n<3)
    return 0;

int i = 0;
int j = n-1;
int maxLeft = A[i];
int maxRight = A[j];

while(i<j)
{
    if(A[i]<A[j])
    {
        maxLeft = max(maxLeft,A[i++]);
        res = res + maxLeft - A[i];
    }
    else{
        maxRight = max(maxRight,A[i--]);
        res = res + maxRight - A[j];
    }
}
return res;

