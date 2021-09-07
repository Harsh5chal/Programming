int Solution::longestSubsequenceLength(const vector<int> &A) {
    int n = A.size();
    if(n<=1) {return n;}
//0-n
vector<int>increasingDp(n, 1);

    for(int i = 1; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if (A[i] > A[j]) {
                increasingDp[i] = max(increasingDp[i], 1 + increasingDp[j]);
            }
        }
    }
//n-0
vector<int>decreasingDp(n, 1);
    for(int i = n - 2; i >= 0; i--) {
        for(int j = n - 1; j > i; j--) {
            if(A[i] > A[j]) {
                decreasingDp[i] = max(decreasingDp[i], 1 + decreasingDp[j]);
            }
        }
    }
//add both
int result = 1;
    for(int i = 0; i < n; i++) {
        result = max(result, increasingDp[i] + decreasingDp[i]);
    }

    // i th element is counted twice
    return result - 1;
}
