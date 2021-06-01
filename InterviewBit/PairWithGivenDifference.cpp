int Solution::solve(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    int i = 0;
    int j = 0;
    int n = A.size();

    while(i<A.size() && j<A.size())
    {
        if(i!=j && A[j]-A[i] == B)
        return 1;
        else if (A[j]-A[i]<B)
        j++;
        else
        i++;
    }

    return 0;
}
