#include<iostream>
int fab_native(int n)
{
    if(n<=1)
        return n;

    int prev = 0;
    int curr = 1;

    for(int i =0;i<n-1;i++)
    {
        int tmp = prev;
        prev = curr;
        curr += tmp;
    }
    return curr%10;
}
int fab_fast(int n)
{
    int fib[n+1];
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2;i<=n;i++)
    {
        fib[i] = (fib[i-1] + fib[i-2])%10;
    }
    return fib[n];
}
int main()
{
    int n = 0;
    std::cin>>n;
    std::cout<<fab_fast(n)<<'\n';
    return 0;
}
