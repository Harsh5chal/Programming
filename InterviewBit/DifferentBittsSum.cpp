#include<iostream>
#include<bitset>
using namespace std;
int Solution::cntBits(vector<int> &A) {
    int n = A.size();
    int ans = 0;

for(int i = 0;i<n;i++)
{
    int count = 0;
    for(int j=i;j<n;j++)
    {
        //and pair
        int x = A[i] & A[j];
        //or pair
        int y = A[i] | A[j];

        bitset<32> bset1(x);
        bitset<32> bset2(y);

        //to count setbits
        int r1  = bset1.count();
        int r2  = bset2.count();

        //absolutte difference of bits
        count = abs(r1-r2);
        ans = ans + (2*count);
    }
}
return ans;
}
