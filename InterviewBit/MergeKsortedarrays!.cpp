vector<int> Solution::solve(vector<vector<int> > &A) {
    priority_queue<int,vector<int>,greater<int>> minh;
for(int i = 0;i<A.size();i++)
{
    for(int j = 0;j<A[0].size();j++)
    {
        minh.push(A[i][j]);
    }
}

vector<int> res;
while(minh.size()>0)
{
    res.push_back(minh.top());
    minh.pop();
}
return res;
}
