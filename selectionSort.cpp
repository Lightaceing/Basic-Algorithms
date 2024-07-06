#include<iostream>
#include<vector>
using namespace std;

void printArray(int array[], int n)
{
  for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
  cout << '\n';
}

void swap(int *ptrA, int *ptrB)
{
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

void selectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(&arr[i], &arr[min]);
    }
}




int main(void)
{
    int arr[] = {2, 31, -4, 77, 39, 88};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, n);
    selectionSort(arr, n);
    printArray(arr, n);
    return EXIT_SUCCESS;
}