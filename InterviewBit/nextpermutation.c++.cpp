#include<stdio.h>
#include<vector>
#include<string>
#include <algorithm>
#include<inttypes.h>
using namespace std;

void nextpermutation(vector<int> arr[6])
{
    int arr[6] = {19, 10, 8, 17, 9, 15};
    int n = arr.size();
    int index = -1;
    for (int i=n-2;i>=0;i++){
        if(arr[i]<arr[i+1]){
            index = i;
            break;
        }
    }
    if (index==-1){
     sort(arr.begin(),arr.end());
    }else if (index+1<n){
    sort(arr.begin()+index+1,arr.end());
    for(int i=index+1;i<n;i++){
        if(arr[i]>arr[index]){
            int temp=arr[i];
            arr[i]=arr[index];
            arr[index]=temp;
            break;
        }
    }

    }

 return arr;

}
