vector<int> Solution::solve(vector<int> &A) {
    int n = A.size();
    for(int i = 0;i<n;i++)
    {
        A[i] = A[i]*A[i];
    }
    sort(A.begin(),A.end());
    return A;
}
