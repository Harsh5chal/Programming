//To find the floor of the square root,
//try with all-natural numbers starting from 1.
//Continue incrementing the number until the square of that number is greater than the given number.
//Create a variable (counter) i and take care of some base cases,
//i.e when the given number is 0 or 1.
//Run a loop until i*i <= n , where n is the given number.
//Increment i by 1
//The floor of the square root of the number is i – 1
#include<bits/stdc++.h>

using namespace std;
int floorSqrt(int A)
{
    if (A==0 || A==1)  return A;
    if(A==2 || A==3) return 1;
    int i =1,result =1;
    while(result<=A)
    {
        i++;
        result - i*i;

    }
    return i-1;
}

int main()
{
    int A = 11;
    cout << floorSqrt(A) << endl;
    return 0;
}

