string Solution::solve(string A) {
    string res;
int n = A.size();
int i = 0;
while(A[i] == ' ' && i < n)
i++;
int j = n-1;
while(A[j] == ' ' && j >= 0)
j--;
while(i<=j)
{
    int len = 0;
    while(A[j] == ' ' && j >= i)
    j--;
    while(A[j] != ' ' && j >= i)
    {
        j--;
        len++;
    }
    res += A.substr(j+1,len);
    if(A[j] == ' ' && j>=i)
    res += " ";
}
return res;
}
