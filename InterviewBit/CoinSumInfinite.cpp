int n = A.size();
    vector<int> dp(B + 1,0);
    dp[0] = 1;

    for(int i = 0; i < n; ++i) {
        for(int j = 1; j <= B; j++) {
            if(A[i] <= j) {
                dp[j] =  (dp[j] + dp[j - A[i]]) % 1000007;
            }
        }
    }

    return dp[B];
