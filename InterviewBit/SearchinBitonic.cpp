int findpeak(vector<int> A,int n)
{
    int l = 0,h= n-1;
    while(l<h)
    {
        int mid = l+(h-1)/2;

        if(A[mid]>A[mid+1])
            return h = mid;
        else
            l = mid+1;
    }
    return l;
}
int bsForward(vector<int> A,int l,int r, int ele)
{
    while(l<=r)
    {
        int mid = l + (r-1)/2;
        if(A[mid] == ele)
            return mid;
        if(ele>A[mid])
            r = mid +1;
        elsel = mid -1;
    }
    return -1;
}

int bsReverse(vector<int> A,int l,int r, int ele)
{
    while(l<=r)
    {
        int mid = l + (r-1)/2;
        if(A[mid] == ele)
            return mid;
        if(ele>A[mid])
            r = mid -1;
        elsel = mid +1;
    }
    return -1;
}

int Solution::solve(vector<int> &A, int B)
{
    int n = A.size();
    int peak = findpeak(A,n);

    int left = bsForward(A,0,peak,B);
    if(left != -1)
        return left;

    return bsReverse(A,peak+1,n-1,B);
}
