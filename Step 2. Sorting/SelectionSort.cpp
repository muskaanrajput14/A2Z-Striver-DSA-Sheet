#include <iostream>
using namespace std;

/*idea of selection sort --->
1. Find the minimum element in the array
2. Swap it with the first element
*/

void selectionSort(int arr[], int n)
{
    int mini;
    for(int i =0; i<n-2; i++)
    {
        mini=i;   //mini has the index of the first element(considering it as the minimum)
        for(int j =i; j<n-1; j++)
        {
            if(arr[j] < arr[mini]) //checking iff our assumption is true with the next element in the array
            {
                mini = j;  // iff not, then updating the minimum element
            }
            swap(arr[mini], arr[i]);  // swaping the 2 numbers
        }
    }
}

// TIME COMPLEXITY = O(N^2)

int main()
{
    int n =5;
    int arr[] = {2,1,6,4,3};
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
          
    return 0;
}