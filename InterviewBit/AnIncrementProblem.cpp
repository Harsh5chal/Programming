vector<int> Solution::solve(vector<int> &A) {
    unordered_map<int,int> m;
for(int i = 0; i<A.size();i++)
{
    if(m.find(A[i]) != m.end())
    {
        int index = m[A[i]];
        A[index]++;
        m[A[index]] = index;
    }
    m[A[i]] = i;
}
return A;
}
