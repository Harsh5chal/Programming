#include<iostream>

long long lcm_naivve(int a, int b)
{
    for(long l = 1;l<=(long long)a*b;l++)
        if(l%a == 0 && l%b == 0)
            return 1;
    return  (long long)a*b;
}

long long gcd(int a, int b)
{
    long long rem;
    long long max = a>= b ? a : b;
    long long  min = a>= b ? b:a;
    do{
        rem = max%min;
        max = min;
        min = rem;
    }while(rem!= 0);
    return max;
}

long long lcm_fast(int a , int b)
{
    return a/gcd_fast(a,b)*b;
}

int main()
{
    long long a,b;
    std::cin>>a>>b;
    std::cout<<lcm_fast(a,b)<<std::endl;
    return 0;
}
