int Solution::solve(vector<int> &A, int B) {
    int xr = 0;
int count =0;
unordered_map<int, int> m;
for(int i = 0; i<A.size();i++)
{
    xr^= A[i];

    if(xr == B)
    {
        count++;
    }
    if(m.find(xr^B) != m.end())
    {
        count = count + m[xr^B];
    }
    m[xr]++;
}
return count;
}
