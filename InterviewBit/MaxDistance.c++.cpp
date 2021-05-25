int maxDiff = -1;
int i,j;

for(i=0;i<n;i++)
{
    for(j=n-1;j>i;--j){
        if(arr[j]>arr[i] && maxDiff<(j-i))
            maxDiff=j-i;
    }

}
return maxDiff;

int Solution::maximumGap(const vector &A) {
int ans=INT_MIN;
int n=A.size();
for(int i=0;i<n;i++)
{
for(int j=n-1;j>=0;j–)
{
if(A[i]<=A[j])
ans=max(j-i,ans);
}
}
return ans;
}

int Solution::maximumGap(const vector<int> &A) {
    vector<pair<int, int>> indexed_array;
    for (int i = 0; i < A.size(); i++) {
        indexed_array.emplace_back(A[i], i);
    }
    sort(indexed_array.begin(), indexed_array.end());
    int ans = 0;
    int least = indexed_array[0].second;
    for (auto const& [value, index] : indexed_array) {
        ans = std::max(ans, index - least);
        least = std::min(least, index);
    }
    return ans;
}
