int n = A.size();

int maxarray[n];
int minarray[n];

maxarray[0]=A[0];

for(int i = 1;i<n;i++)
{
    maxarray[i]=max(A[i],maxarray[i-1]);
}

minarray[n-1]=A[n-1];

for(int i = n-2;i>=0;i--)
{
    minarray[i]=min(A[i],minarray[i+1]);
}

for(int i =1;i<n-1;i++)
{
    if(A[i]>maxarray[i-1]&&A[i]<minarray[i+1])
        return 1;
}
return 0;
