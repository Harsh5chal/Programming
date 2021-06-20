void getmax(string A, int B, string& max)
{
    if(B==0) return;
    int n = A.length();

    for(int i=0;i<n-1;i++)
    {
        for(int j =i+1;j<n;j++)
        {
            if(A[j]>A[i])
{
    swap(A[j],A[i]);

    if(A.compare(max)>0)
        max = A;
    getmax(A,B-1,max);

    swap(A[i],A[j]);//backtrack
}
        }
    }
}

string Solution::solve(string A, int B) {
    string max = A;
    getmax(A,B,max);
    return max;
}
