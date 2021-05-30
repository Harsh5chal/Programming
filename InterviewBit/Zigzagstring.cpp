string res;
int n = A.size();
int  i = 0;
int x = 0;

if(B==1)
    return A;

    for(int j = B;j>0;j--)
    {
        while(i<n)
        {
            if(j!=1)
            {
                res += A[i];
                i += 2*j -2;
            }
            if(j!=B)
            {
                if(i<n)
                {
                    re += A[i];
                    i += 2*(B-j+1)-2;
                }
            }

        }
        i = ++x;
    }
    return res;

