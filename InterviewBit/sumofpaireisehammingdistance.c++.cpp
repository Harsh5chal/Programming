long long n =A.size();
long long res =0;

for(int i=0;i<32;i++)
{
    int count=0;
    for(int j=0;j<n;j++)
    {
        if(A[j] & 1<<i)
            count++;
    }
    res += count * (n-count)*2;
}
return res % 1000000007;
