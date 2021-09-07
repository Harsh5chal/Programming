sort(A.begin(),A.end());
    int n=A.size();
    for(int i=0;i<n;i++)
    {
        if(i+1<n && A[i]!=A[i+1] && A[i]==n-i-1)
        {
            return 1;
        }
        else if(i==n-1 && A[i]==0)
        {
            return 1;
        }
    }
    return -1;
