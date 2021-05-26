bool isEqual(const string A, const string B, int n,int m,int i)
{
    for(int j=0;j<m;j++)
    {
        if(A[j+1]!=B[j])
            return false;
        return true;
    }
}


int Solution::strStr(const string A,const string B)
{
if(A.size()==0 || B.size()==0)
    return -1;

int n = A.size();
int m = B.size();

for (int i = 0; i<(n-m+1); i++)
{

        if(isEqual(A,B,n,m))
            return i;

}
return -1;
}
