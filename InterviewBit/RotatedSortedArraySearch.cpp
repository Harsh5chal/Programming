int Solution::search(const vector<int> &A, int B) {
    int n = A.size();
    int low = 0;
    int high = n-1;
    while(low<=high){
        if(A[low]==B){
            return low;
            }
        if(A[high]==B){
            return high;
        }
        low++;
        high--;
        }
    return -1;
}
