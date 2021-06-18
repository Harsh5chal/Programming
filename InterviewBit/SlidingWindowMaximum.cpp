int n = A.size();
int j;
int max;

for(int i =0;i<=n-k;i++)
{
    max = A[i];
    for(int j = 1;j<k;i++)
    {
        if(A[i+j]>max)
            max = A[i+j];
    }
    cout<<max<<" ";
}

//other sol
vector<int> Solution::slidingMaximum(const vector<int> &a, int k) {
vector<int>res;
    multiset<int,greater<int>>m;
    for(int i = 0;i<a.size();i++){
        m.insert(a[i]);
        if(i>=k)m.erase(m.find(a[i-k]));
        if(i>=k-1)res.push_back(*m.begin());

    }
    return res;
}
