int n = A.size();
int dp[n+1][n+1];

for(int  i = 0;i<=n;i++)
{
    dp[0][i] = dp[i][0] = 0;
}
for(int i = 0;i<=n;i++)
{
    int ind =n;
    for(int j = n;j>=1;j--)
    {
        if(A[j-1]==A[i-1])
            ind = j;
        if(j>i)
        {
            dp[i][j]=0;
            continue;
        }
         dp[i][j] = max(dp[i - 1][j], 2 + dp[i - 1][ind + 1] - (ind == i));
    }
    dp[i][0] = dp[i][1];
}
 return dp[n][0];
