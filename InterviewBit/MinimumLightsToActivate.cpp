int n = A.size();
int count = 0;

for(int X=0;X<n;X++)
    {
        int flag = 0;
        for(int j=X+B-1;j>=X-B+1;j--)
        {
            if(A[j]==1)
            {
                count++;
                flag =1;
                X=j+B;
                break;
            }
        }
        if(flag==0)
            return -1;
    }
    return count;
