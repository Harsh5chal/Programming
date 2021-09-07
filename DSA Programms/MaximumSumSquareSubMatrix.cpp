int Solution::solve(vector<vector<int> > &A, int B) {
    int n = A.size();
vector<vector<int> > pre(n,vector<int>(n+1,0));
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        pre[i][j+1] = pre[i][j] + A[i][j];
    }
}
int ans = INT_MIN,k=0;
for(int j=B;j<=n;j++)
{
    int cur = 0;
    for(int i=0;i<B;i++)
    {
        cur += pre[i][j]-pre[i][j-B];
    }
    ans = max(ans,cur);
    for(int i=B;i<n;i++)
    {
        cur += pre[i][j]-pre[i][j-B];
        cur = cur - (pre[i-B][j]-pre[i-B][j-B]);
        ans = max(ans,cur);
    }
}
return ans;
}
