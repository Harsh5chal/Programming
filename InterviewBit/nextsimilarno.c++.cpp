for(int i=A.size()-2;i>=0;i++)
{
    if(A[i]<A[i+1]){
        reverse(A.begin()+i+1,A.end());
        for(int j=j+1;j<A.size();j++)
        {
            if(A[j]>A[i])
            {
                swap(A[i],A[j]); break;
            }
        }
        retuen A;
    }
    return "-1";
}
