#include<iostream>
#include "binarySearch.h"

using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        int value = arr[i];
        int j = i;

        while(j > 0 && arr[j-1] > value)
        {
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = value;
    }
}


int main()
{
    int arr[] = { 3, 8, 5, 4, 1, 9, -2 };
    int n = sizeof(arr)/sizeof(arr[0]);
    displayArray(arr, n);
    insertionSort(arr, n);
    displayArray(arr, n);

    return 0;
}