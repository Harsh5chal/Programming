int Solution::removeElement(vector<int> &A, int B) {

    int n = A.size();
    int count = 0;
for(int i = 0;i<n;i++)
{
    if(A[i]!=B)
    {
        A[count] = A[i];
        count++;
    }

}
return count;
}
