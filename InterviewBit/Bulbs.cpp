int n = A.size();
int res = 0;
int count = 0;
for(int i = 0;i<n;i++)
{
    if(count == 0)
    {
        if(A[i]==0)
        {
            res++;
            count = 1;
        }
    }
    else{
        if(A[i]==1)
        {
            res++;
            count = 0;
        }
    }
}
return res;
