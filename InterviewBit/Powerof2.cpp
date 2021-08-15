int n = A.size();
long  long carry = A[0]-'0';

for(int i =1;i<n;i++)
{
    carry = carry*10 + (A[i]-'0');
}

if(carry == 1) return 0;

int ans = log(carry)/log(2);

if(pow(2,ans) == carry) return 1;
else return 0;
