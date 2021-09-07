vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C) {
    priority_queue<int, vector<int>, greater<int>> maxh;
    vector<int> ans(C);
    sort(A.begin(),A.end(),greater<int>());
    sort(B.begin(),B.end(),greater<int>());
    for(int i = 0;i<C;i++)
    {
        for(int j = 0;j<C;j++)
        {
            int val = A[i]+B[j];
            if(maxh.size()<C)
            {
                maxh.push(val);
            }
            else{
                if(maxh.top()<val)
                {
                    maxh.pop();
                    maxh.push(val);
                }
                else
                    break;
            }
        }
    }
 for(int i = C-1;i>=0;i--)
 {
     ans[i] = (maxh.top());
     maxh.pop();
 }
 return ans;
}
