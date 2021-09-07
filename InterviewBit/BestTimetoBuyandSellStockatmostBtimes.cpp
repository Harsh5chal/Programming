int dp[501][501];

int stock(vector<int> &A, int B, int curr, int prev, int count)
{
    if(curr >= A.size() || count == B) return 0;
    if(dp[curr][prev] != -1) return dp[curr][prev];

    if(A[curr]<A[prev])
        return dp[curr][prev] = max(stock(A,B,curr+1,prev,count), stock(A,B,curr+1,curr,count));
    else{
        return dp[curr][prev] = max(A[curr]-A[prev]+stock(A,B,curr+1,curr,count+1),stock(A,B,curr+1,prev,count));
    }
}
int Solution::solve(vector<int> &A, int B) {
    memset(dp, -1, sizeof(dp));
    return stock(A,B,1,0,0);
}
