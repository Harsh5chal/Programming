map<int, bool> mp;
int n = A.size();
int m = B.size();

for(int i = 0; i<n;i++)
{
    mp[A[i]]=true;
}
for(int  i = 0;i<m;i++)
{
    mp[B[i]]=true;
}

for(auto i:mp)
    cout<<i.first<<"";
//2SOL
for(int i =0;i<B.size();i++)
{
    A.push_back(B[i]);
}
sort(A.begin(),A.end());
