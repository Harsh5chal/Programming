int n = A.size();
int m = A[0].size();
int res = 0;
int dp[n+1][m+1];
memset(dp,0,sizeof(dp));

for(int i = 1;i<=m;i++)
{
    for(int j = 1;j<=n;j++)
    {
        if(A[j-1][i-1] == 0)
        {
            dp[j][i] = 0;
        }
        else{
            dp[i][j] += dp[j-1][i] +1;
        }
    }
}

for(int i = 1;i<=n;i++)
{
    int arr[n+1], count = 0;
    memset(arr,0,sizeof(arr));
    for(int j = 1;j<=m;j++)
    {
        arr[dp[i][j]]++;
    }
    for(int j = n;j>=0;j--)
    {
        count += arr[j];
        res = max(res, count*j);
    }
    return res;
}
