int Solution::solve(vector<int> &A) {
    int n = A.size();
    unordered_map<int, int> m;
for(int i = 0;i<n;i++)
{
        m[A[i]]++;
}
for(int i = 0;i<n;i++)
{
    if(m[A[i]]>1)
        return A[i];
}
return -1;
}
