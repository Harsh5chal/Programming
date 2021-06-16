int n = A.size();

if(n<=2)
    return n;

int i = 2; //left

for(int j=2;j<n;j++) //J=right
{
    if(A[i-2]!=A[j])
        A[i++]=A[j];
}
return i;
