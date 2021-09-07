using ll = long long;
ll MinCost(int start, int end, vector<int> &cuts,vector<vector<ll>> &dp, vector<vector<int>> &cut)
{
    if(abs(end - start)<= 1) return 0;
    if(dp[start][end] != -1) return dp[start][end];
    ll ans = -1;
    for(int i = start +1;i<end;i++)
    {
        ll a = cuts[end] - cuts[start] + MinCost(start,i,cuts,dp,cut)+ MinCost(i,end,cuts,dp,cut);
        if((ans == -1ll) || (ans>a))
           {
               cut[start][end] = i;
               ans = a;
           }
    }
    dp[start][end] = ans;
    return ans;
}

void Fill(vector<int> &ans, vector<vector<int>> &cut, vector<int> &cuts, int start, int end)
{
    if(abs(end-start) <= 1) return;
    ans.push_back(cuts[cut[start][end]]);
    Fill(ans,cut,cuts,start,cut[start][end]);
    Fill(ans,cut,cuts,cut[start][end],end);
}

vector<int> Solution::rodCut(int A, vector<int> &B) {
    B.push_back(0);
    B.push_back(A);
    sort(B.begin(),B.end());
    int n = B.size();
    vector<vector<ll>> dp(n,vector<ll>(n,-1));
    vector<vector<int>> cut(n,vector<int>(n));
    MinCost(0,n-1,B,dp,cut);
    vector<int> ans;
    Fill(ans,cut,B,0,n-1);
    return ans;
}
