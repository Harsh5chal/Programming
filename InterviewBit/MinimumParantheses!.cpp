int count = 0;
int ans =0;
int n  = A.length();
for(int i =0;i<n;i++)
{
    if(A[i]=='(')
    {
        count++;
    }
    else{
        count--;
        if(count<0)
        {
            ans++;
            count = 0;
        }
    }
}
ans = ans+count;
return ans;
