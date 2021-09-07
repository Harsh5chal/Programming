int solve(int A) {
    int i = 0, x = 0,ans = 0;
int B = abs(A);

while(x<B || (x-B)%2 != 0)
{
    ans++;
    i++;
    x += i;
}
return ans;
}
