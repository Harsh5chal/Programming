int Solution::lis(const vector<int> &A) {
    int n = A.size();

vector<int> dp(n,-1);

int maxans = 0;
for(int i = 0;i<n;i++)
{
    int lenmax = 0;
    for(int j = 0;j<i;j++)
    {
        if(A[i]>A[j])
            lenmax = max(lenmax,dp[j]);
    }
    dp[i] = lenmax+1;
    maxans = max(maxans,dp[i]);
}
return maxans;

}
