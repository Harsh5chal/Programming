string Solution::intToRoman(int A) {
    string ans="";
int num[13] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
string sym[13] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
int i = 12;
while(A>0)
{
    int div = A/num[i];
    A = A%num[i];
    while(div--)
    {
        ans=ans+sym[i];
    }
    i--;
}
return ans;
}
