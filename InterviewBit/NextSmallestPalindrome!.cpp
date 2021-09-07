int n=A.size();
int mid =(n-1)/2;
int i=mid, carry =1;
int r=n-1,l=0;
int r1=n-1;
int l1=0;
string temp =A;

//normal condition where copying the left eliment into the right side elements
// eg 12317 ans would be 12321 which the ans
while (l1<=r1)
{
    temp[r1]=temp[l1];
    r1--;
    l1++;
}
if (temp>A) return temp;


//now itf temp > A so we see increase the middle digit by 1 and if it is 9 then
// taking carry and adding further the carry
while (i>=0)
{
    int val =((int)A[i]-48);
    val=val+carry;
    carry=val/10;
    val =val%10;
    A[i]=(char)(val+48);
    i--;
}

//if the digits are like 99999 so after while look it will be 00099 so we add 1 infront
// so it comes 100099 now we will shift r=n-1 to n so that we can make 1000001
if (carry!=0)
{
    A= to_string(carry)+A;
    r++;
}

//now copying left side to the right side using two pointer approach
while(l<=r)
{
    A[r]=A[l];
    r--;
    l++;
}
return A;
