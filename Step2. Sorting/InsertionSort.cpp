#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{
    for(int i =0; i<n-1; i++)
    {
        int j =i;
        while(j>0 && arr[j-1] > arr[j])
        {
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
}

// tc- O(N) iff sorted array is the input. Also iff the input is sorted array, the loop never runs

void InsertionSortRecc(int arr[], int n)
{
    if(n==1) return;
    for(int i =0; i<n-1; i++)
    {
        int j =i;
        while(j>0 && arr[j-1] > arr[j])
        {
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
    InsertionSortRecc(arr, n-1);
}
int main()
{
    int n =5;
    int arr[]={8,1,4,0,3};
    // InsertionSort(arr, n);
    InsertionSortRecc(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<' ';
    }
    
    return 0;
}