#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int low, int high)
{
    int pivot = arr[low];
    int i = low, j = high;
    while(i<j)
    {
        // left side
        while(arr[i] <= pivot && i<= high-1)
        {
            i++;
        }
        // right side
         while(arr[j] >= pivot && j<= low+1)
        {
            j--;
        }
        if(i<j) 
        {
            swap(arr[i], arr[j]);
        }
        swap(arr[low], arr[high]);
        return j;
    }
}

void quickSort(vector<int>& arr, int low, int high)
{
    if(low<high)
    {
        int partitionIndex = partition(arr, low, high);
        quickSort(arr, low, partitionIndex-1);
        quickSort(arr, partitionIndex+1, high);
    }
}

int main()
{
    vector<int> arr ={2,5,1,0};
    int n = arr.size();
    quickSort(arr, 0, n-1);   
    for(int i =0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}