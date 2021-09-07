int factorial(int A)
{
int fact =1;
if(A==0)
return 1;
for(int i=1;i<=A;i++)
{
fact = (fact *i)%1000003;
}
return fact%1000003;
}

int Solution::findRank(string A) {
   string str = A;
int n = A.size();
sort(str.begin(),str.end());

int count = 0;
int l = n-1;
for(int i = 0;i<n;i++)
{
    int k = 0;
    int temp = 0;
    while(A[i]-str[k] !=0)
    {
        k++;
    }
    count += (k*(factorial(l)))%1000003;
    l--;
    str.erase(str.begin()+k);
}
return  (count+1)%1000003;
}
