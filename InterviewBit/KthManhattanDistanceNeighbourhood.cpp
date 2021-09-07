vector<vector<int> > Solution::solve(int A, vector<vector<int> > &B) {
    vector<vector<int>> ans;
int n = B.size();
int m = B[0].size();

if(m==0 || n==0)
    return {};
if(A==0)
    return B;

// 3D DP
int dp[n][m][A+1];

// manhattan distance = 0
for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
        dp[i][j][0]=B[i][j];


for(int k=1;k<=A;k++){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            dp[i][j][k]=dp[i][j][k-1];

            if(i>0){
                dp[i][j][k] = max(dp[i][j][k],dp[i-1][j][k-1]);
            }
            if(i<n-1){
                dp[i][j][k] = max(dp[i][j][k],dp[i+1][j][k-1]);
            }
            if(j>0){
                dp[i][j][k] = max(dp[i][j][k],dp[i][j-1][k-1]);
            }
            if(j<m-1){
                dp[i][j][k] = max(dp[i][j][k],dp[i][j+1][k-1]);
            }
        }
    }
}
for(int i=0;i<n;i++){
    vector<int> v;
    for(int j=0;j<m;j++){
        v.push_back(dp[i][j][A]);
    }
    ans.push_back(v);
}
return ans;

}
