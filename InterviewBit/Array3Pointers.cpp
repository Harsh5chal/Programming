int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
int diff = INT_MAX;
int p =A.size();
int q= B.size();
int r = C.size();
int res_i = 0;
int res_j = 0;
int res_k = 0;
int i =0;
int j =0;
int k =0;

while(i<p && j<q && k<r)
{
    int minimum = min(A[i],min(B[j],C[k]));
    int maximum = max(A[i],max(B[j],C[k]));

    if(maximum-minimum < diff)
    {
        res_i = i,res_j = j, res_k = k;
        diff = maximum - minimum;
    }
    if(diff==0)
        break;
    if(A[i]==minimum && A[i] <= B[j] && A[i] <=C[k])
        i++;
    else if(B[j]==minimum && B[j] <= A[i] && B[j] <=C[k] )
        j++;
    else
        k++;
}
return diff;
}
