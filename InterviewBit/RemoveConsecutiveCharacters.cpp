int n  = A.size();

for(int i = 0;i<n;i++)
{
    int count =  0;
    for(int  j =0;j<B;j++)
    {
        if(A[i]!=A[i+j])
        {
            break;
        }
        else{
            count++;
        }
    }
    if(count==B)
    {
        A.erase(i,B);
        i--;
    }

}
return A;
