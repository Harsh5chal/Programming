vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    int n = A.size();
    int m = B.size();
    int i = 0;
    int j = 0;

vector<int> ans;

while(i<=n-1 && j<=m-1)
{
    if(A[i]==B[j])
    {
        ans.push_back(A[i]);
        i++,j++;
    }
    else if(A[i]>B[j])
        j++;
    else
        i++;
}
return ans;
}
