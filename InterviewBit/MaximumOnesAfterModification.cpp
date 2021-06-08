//in this quesn we have to find out how many 1111 we have to place together to make no. maximum
int n = A.size();
int count = 0;
int l = 0;
int max_len = 0;

for(int i = 0;i<n;i++)
{
    if(A[i]==0)
        count++;
    while(count>B)
    {
        if(A[l]==0)
            count--;
        l++;
    }
    max_len = max(max_len,i-l+1);
}
return max_len;
