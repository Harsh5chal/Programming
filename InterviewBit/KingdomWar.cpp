int Solution::solve(vector<vector<int> > &A) {
    int n=A.size();
    int m=A[0].size();
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            A[i][j]+=A[i-1][j];
        }
    }
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=0;k<m;k++){
                if(i>0) sum=max(A[j][k]-A[i-1][k],sum+A[j][k]-A[i-1][k]);
                if(i==0) sum=max(A[j][k],sum+A[j][k]);
                max_sum=max(sum,max_sum);
            }
        }
    }
    return max_sum;
}
