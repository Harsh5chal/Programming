int Solution::solve(vector<int> &A) {
    if(A.empty())
        return 0;

    int n=A.size();
    unordered_map<int, int> m;
    int sum=0;
    int l=0,k = 1;

    for(int i=0; i<n; i++){
//change o to -1 and the problem reduces to finding
//largest subarray with sum 1
        A[i] = (A[i]==0)?-1:1;
        sum+=A[i];

        if(sum==k)
            l=i+1;

        if(m.find(sum) == m.end())
            m[sum] = i;

        if(m.find(sum-k) != m.end()){
            l = max(l, i-m[sum-k]);
        }
    }
    return l;

}

