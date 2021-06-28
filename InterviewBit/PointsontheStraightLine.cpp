int Solution::maxPoints(vector<int> &A, vector<int> &B) {
    int maxCount = 0;
for(int i = 0;i<A.size();i++)
{
    int maxGroupSize = 0,overlapCount = 1;
    unordered_map<double, int > slopeMap;
    for(int j =i+1;j<A.size();j++)
    {
        if(A[i]==A[j] and B[i]==B[j])
            overlapCount++;
        else{
            double slope = A[i]!=A[j] ? (1.0*(B[j]-B[i])/(A[j]-A[i])): 1e9;
            maxGroupSize = max(maxGroupSize , ++slopeMap[slope]);
        }
    }
    maxCount = max(maxCount, overlapCount + maxGroupSize);
}
return maxCount;
}
