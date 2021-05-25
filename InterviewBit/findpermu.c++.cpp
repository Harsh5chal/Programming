#include<stdio.h>
#include<bits/c++io.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

void FindDuplicates(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++){
        if (arr[abs(arr[i])] >= 0)
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        else
            cout << abs(arr[i]) << " ";
    }

}

int main()
{
    int arr[] = { 1, 2, 3, 1, 3, 6, 6 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    FindDuplicates(arr, arr_size);
    return 0;
}
