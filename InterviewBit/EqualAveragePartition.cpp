vector<vector<int> > Solution::avgset(vector<int> &A) {
    int n  = A.size();
    int sum = 0;
    for(int i = 0;i<n;i++)
        sum += A[i];
    sort(A.begin(),A.end());

    bool dp[sum+1][n+1];
    memset(dp,false,sizeof(dp));
    dp[0][0] = true;

    int curr1 = n+2;
    int curr2 = -1;

    for(int j = 0;j<n;j++)
    {
        for(int k = n;k>=1;k--)
        {
            for(int i = sum;i>=0;i++)
            {
                if(i-A[i]>=0 and dp[i-A[j][k-1] != false)
                {
                    dp[i][k] = true;
                    if(k*sum == i*n and k<=curr1)
                    {
                        curr1 = k;
                        curr2 = i;
                    }
                }
            }
        }
    }
    vector<vector> ans;
    if(curr1>=n) return ans;
    multiset s;
    for(int i = 0;i<n;i++)
        s.insert(A[i]);
    vector<int> v1;
    vector<int> v2;

    while(curr2 !=0)
    {
        auto it = s.begin();

        if(curr2 - (*it)>=0 and dp[curr2 - (*it)][curr1-1]== true)
        {
            curr2 = curr2 - (*it);
            v1.push_back(*it);
            s.erase(it);
            curr1--;
        }
        else{
            v2.push_back(*it);
            s.erase(it);
        }
    }
    while(s.size()>0)
    {
        v2.push_back(*s.begin());
        s.erase(s.begin());
    }
    ans.push_back(v1);
    ans.push_back(v2);
    return ans;
}
