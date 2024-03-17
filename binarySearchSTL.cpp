#include<iostream>
#include<algorithm>

void displayArray(int arr[], int n)
{
    for(auto i=0;i<n;i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

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