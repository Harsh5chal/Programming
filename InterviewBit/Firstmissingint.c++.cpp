#include<bits/c++io.h>
#include<cmath>
#include<math.h>
#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

//function to put neg in left

int segregate(int arr[],int size)
{
    int j=0,i;
    for(i=0;i< size;i++)
    {
        if(arr[i]<=0){
            swap(&arr[i],&arr[j]);
            j++;
        }
    }
    return j;
}
int findMissingPositive(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        if (abs(arr[i]) - 1 < size && arr[(arr[i]) - 1] > 0){
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
            }
    }
    for (i = 0; i < size; i++){
        if (arr[i] > 0){

            return i + 1;
            }

    return size + 1;
    }
}

//function for both +ve and -ve integers

int findMissing(int arr[], int size)
{
    int shift=segregate(arr,size);
    return findMissingPositive(arr + shift,size-shift);
}
int main()
{
    int arr[] = { 0, 10, 1, 4, 2, -10, -20 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int missing = findMissing(arr, arr_size);
    cout << "The smallest positive missing number is " << missing;
    return 0;
}
