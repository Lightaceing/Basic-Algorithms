#include<iostream>
#include "binarySearch.h"

void displayArray(int arr[], int n)
{
    for(auto i=0;i<n;i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

void linearSearch(int arr[], int n, int target)
{
    for(auto i = 0;i<n;i++)
    {
        if(arr[i] == target)
        {
            std::cout << "The target is at " << i << ".\n";
            return;
        }
    }
    std::cout << "The target is not in the list.\n";

}

int binarySearchIt(int arr[], int n, int target)//log2(n) search
{
    int left = 0, right = n-1;
    while(left <= right)
    {
        int mid = left + (right-left)/2;//left + (right-left)/2 <--- prevents overflow
        if(arr[mid] == target)
        {
            return mid;
        }
        if(target > arr[mid])
        {
            left = mid+1;
        }
        else
        {
            right = mid-1;
        }
    }
    return -1;
}

int binarySearchRc(int arr[], int left, int right, int target)//log2(n) search
{
    if(left > right)
    {
        return -1;
    }
    int mid = left + (right-left)/2;//left + (right-left)/2 <--- prevents overflow
    if(arr[mid] == target)
    {
        return mid;
    }
    else if(target < arr[mid])
    {
        binarySearchRc(arr,  left, mid-1, target);
    }
    else
    {
        binarySearchRc(arr,  mid+1, right, target);
    }
    return -2;//to get rid of warning  during compilation
    //warning: control reaches end of non-void function [-Wreturn-type]
}


// int main(void)
// {
//     int arr[] = {2, 3, 5, 7, 9};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     displayArray(arr, n);
//     //linearSearch(arr, n, 82);
//     std::cout << binarySearchIt(arr, n, 1);
//     return EXIT_SUCCESS;
// }