#include<iostream>
#include<algorithm>
#include "binarySearch.h"


/*
returns true if value exists else returns false
*/

int main()
{
    int arr[] = {2, 3, 5, 7, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    displayArray(arr, n);
    int target = 3;
    if(std::binary_search(std::begin(arr), std::end(arr), target))
    {
        std::cout << "Found\n";
    }
    else
    {
        std::cout << "Not Found\n";
    }
    return EXIT_SUCCESS;
}