#include<iostream>
int fab_native(int n)
{
    if(n<=1)
        return n;
    return fab_native(n-1) + fab_native(n-2);
}
int fab_fast(int n)
{
    int fib[n+1];
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2;i<=n;i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
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
