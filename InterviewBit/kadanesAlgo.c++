#include<iostream>
#include<climits>

using namespace std;

int MaxArraySum(int a[],int size)
{
    int max_so_far= 0;
    int max_end=0;

    for(int i=0;i<size;i++)
    {
        max_end=max_end + a[i];
        if (max_end<0)

            max_end=0;

        if (max_so_far<max_end)

            max_so_far=max_end;


    }
    return max_so_far;
}

int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = MaxArraySum(a,n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
