string res;
queue<char>q;
vector<int>m(256,0);

for(int i = 0;i<A.size();i++)
{
    m[A[i]]++;
    q.push(A[i]);
    while(!q.empty() && m[q.front()>1])
        q.pop();
    res = res + !q.empty() ? q.front() : '#';
}
return res;
