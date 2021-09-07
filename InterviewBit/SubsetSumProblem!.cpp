int Solution::solve(vector<int> &A, int B) {

    int N = A.size();
    int dp[N+1][B+1];

    for(int i = 0;i<N+1;i++)
    {
        for(int j=0;j<B+1;j++)
        {
            if(i == 0) dp[i][j] = 0;
            if(j == 0) dp[i][j] = 1;
        }
    }

    for(int i = 1;i<N+1;i++)
    {
        for(int j = 1;j<B+1;j++)
        {
            if(A[i-1]<=j)
            {
                dp[i][j] = dp[i-1][j-A[i-1]] || dp[i-1][j];
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[N][B];
}
