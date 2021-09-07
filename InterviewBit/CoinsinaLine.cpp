int solve(vector<int> &A, int i , int j, vector<vector<int>> &dp)
{
    if(i>j) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    return dp[i][j] = max(A[i]+min(solve(A,i+2,j,dp),solve(A,i+1,j-1,dp)),A[j] + min(solve(A,i+1,j-1,dp), solve(A,i,j-2,dp)));
}

int Solution::maxcoin(vector<int> &A) {
    vector<vector<int>> dp(A.size(),vector<int> (A.size(),-1));
    return solve(A,0,A.size()-1,dp);
}
