//using sum eq approach
#include<math.h>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void findNumbers(int arr[], int n)
{
    int sumN = (n*(n+1))/2;
    int sumSqN = (n * (n + 1) * (2 * n + 1)) / 6;
    int sum = 0;
    int sumSq = 0;
    int i;

    for(i=0;i<n;i++)
    {
        sum += arr[i];
        sumSq = sumSq + (pow(arr[i],2));
    }
     int B = (((sumSq - sumSqN)/(sum - sumN)) + sumN - sum) / 2;
     int A = sum - sumN + B;
         cout << "A = " ;
         cout << A << endl;
         cout << "B = " ;
         cout << B << endl;
}
int main() {
        int arr[] = { 1, 2, 2, 3, 4 };
        int n = sizeof(arr)/sizeof(arr[0]);
        findNumbers(arr, n);
    return 0;
}
