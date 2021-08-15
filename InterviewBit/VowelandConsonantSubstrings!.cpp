int Solution::solve(string A) {
    int v = 0;
    int c = 0;
    for(int i = 0;i<A.size();i++)
    {
        if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u')
        {
            v++;
        }
        else{
            c++;
        }

    }
    v = (v*c)%1000000007;
    return v;
}
