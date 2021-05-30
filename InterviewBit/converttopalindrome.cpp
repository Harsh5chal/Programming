int Solution::solve(string A) {
    int n=A.length(),i=0,j=n-1,mismatch=0;
    while(i<=j)
    {
        // If character matches, shift both the pointers
        if(A[i]==A[j])
        {
            i++;
            j--;
        }
        // If mismatch occurs
        else
        {
            if(i<=j-1 && A[i]==A[j-1])
            {
                mismatch++;
                j--;
            }
            else if(i+1<=j && A[i+1]==A[j])
            {
                mismatch++;
                i++;
            }
            else
            {
                return 0;
            }
        }
    }
    if(mismatch<=1)
    {
        return 1;
    }
    return 0;
}
