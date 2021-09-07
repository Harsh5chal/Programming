int Solution::searchInsert(vector<int> &A, int B) {
    int n = A.size();
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = (high+low)/2;
        if(A[mid] == B) return mid;
        else if(A[mid]<B) low = mid +1;
        else high = mid-1;
    }
    return high+1;
}
