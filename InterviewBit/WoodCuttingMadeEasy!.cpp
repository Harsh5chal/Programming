int Solution::solve(vector<int> &A, int B) {
    int l = 1,h = 1e6;
    while(l<=h){
        int mid = (l+h)/2;
        int cur = 0;
        for(int i = 0;i<A.size();i++)
            cur+=max(0,A[i]-mid);
        if(cur>=B){
            l = mid+1;
        }
        else{
            h = mid-1;
        }
    }
    return h;
}
