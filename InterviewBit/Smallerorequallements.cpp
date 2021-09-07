int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int high = 0;
    int low = n-1;
    int count = 0;
    while(high <= low)
    {
        int mid = (high+low)/2;

        if(A[mid] <= B)
        {
            count = mid +1;
            high = mid +1;
        }
        if(A[mid] > B)
        {
            low = mid-1;
        }
    }

    return count;
}
