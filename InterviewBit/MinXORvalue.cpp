int Solution::findMinXor(vector<int> &A) {
    int min_xor = INT_MAX;
    sort(A.begin(),A.end());
    int n = A.size();
for(int i =0;i<n;i++)
    min_xor = min(min_xor, A[i]^A[i+1]);
    return min_xor;
}
