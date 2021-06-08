vector<vector<int> > Solution::threeSum(vector<int> &A) {
sort(A.begin(),A.end());
int n = A.size();
vector<vector<int>>ans;

if(n<3)
    return ans;

for(int i =0;i<n-2;i++)
{
    if(i>0 && A[i]==A[i-1])
        continue;
    int end = n-1;
    int start = i+1;

while(start<end)
{
    long long sum = (long long)A[i]+A[start]+A[end];
    if(sum==0)
    {
        ans.push_back({A[i],A[start],A[end]});
        while(start<n-1 && A[start] == A[start+1])
        start++;
        while(end>0 && A[end] == A[end-1])
        end--;

        end--,start++;
    }
    else if(sum>0)
        end--;
    else
        start++;
}
}
return ans;

}
