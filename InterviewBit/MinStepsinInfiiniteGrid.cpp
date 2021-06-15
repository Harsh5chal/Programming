int n = A.size();
int count = 0;

for(int i = 0 ; i<n-1;i++)
{
    count = count + max(abs(A[i]-A[i+1],abs(B[i]-B[i+1])));

}
return count;
