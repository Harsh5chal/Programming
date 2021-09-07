#include<iostream>

int gcd_native(int a, int b)
{
    int curr = 1;
    for(int i = 2;i<=a && i<=b;i++)
    {
        if(a%i == 0 && b%i== 0)
        {
            if(i> curr)
            {
                curr = i;
            }
        }
    }
    return curr;
}

long long gcd_fast(long long a, long long b)
{
    long long rem,low , high;
    low = a>= b ? b:a;
    high = a>= b ? a:b;

    do{
        rem = high%low;
        high = low;
        low = rem;
    }
    while(rem !=0)
    {
        return high;
    }
}

int main()
{
    long long a, b;
    std::cin>>a>>b;
    std::cout<<gcd_fast(a,b)<<std::endl;
    return 0;
}
