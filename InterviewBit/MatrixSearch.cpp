int n = A.size();
int m = A[0].size();
int low = 0;
int high = m-1;
int i = 0;

while(low<=high && i<n)
{
    if(A[i][m-1]<B)
    {
        i++;
        continue;
    }
    int mid = (low+high)/2;
    if(A[i][mid] == B)
        return 1;
    else if(A[i][mid]<B)
        low = mid+1;
    else
        high = mid-1;
}
return 0;
