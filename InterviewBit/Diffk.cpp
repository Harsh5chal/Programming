int i = 0;
int j = 1;

while(i<A.size() && j<A.size())
{
    if(i!=j && A[j]-A[i] == B)
    {
        return 1;
    }
    else if(A[j]-A[i]<B)
        j++;
    else
        i++;
}
if(A[j]-A[i]!=B)
    return 0;
