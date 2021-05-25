//A brute force solution is to consider all possible set of contiguous partitions and calculate the maximum sum partition in each case and return the minimum of all these cases.
//naive solution using recursion

ARR=C
N=A
K=B
vector<int> arr;
if(B==1)
    return sum(arr,0,A-1);
if(A==1)
    return arr[0];
int best = INT_MAX;
for(int i=1;i<A;i++)
    best = min(best, max(paint(arr,i,B-1),sum(arr,i,A-1)));

    return best;
