 int n = A.size(), m = B.size();

    vector<vector<int>> dp(n+1, vector<int>(m+1, INT_MAX));

    dp[0][0] = 0;

    for(int i = 0; i<=n; i++){
        for(int j = 0; j<=m; j++){
            if(i){
                dp[i][j] = min(dp[i][j], dp[i-1][j]+1);
            }
            if(j){
                dp[i][j] = min(dp[i][j], dp[i][j-1]+1);

            }
            if(i&&j){
                if(A[i-1]==B[j-1]){
                    dp[i][j] = min(dp[i][j], dp[i-1][j-1]);

                }
                else{
                    dp[i][j] = min(dp[i][j], dp[i-1][j-1]+1);
                }
            }
        }
    }

    return dp[n][m];
