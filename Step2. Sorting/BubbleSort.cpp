#include <iostream>
using namespace std;

/*idea of Bubble sort --->
1. Find the max element in the arr1ay
2. Swap it with the first element
*/

void bubbleSort(int arr1[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr1[j] > arr1[j + 1])
                swap(arr1[j], arr1[j + 1]);
        }
        cout << "runs" << endl;
    }
}

// TIME COMPLEXITY = O(N^2) -> worst or avg

void bubbleSortRecc(int arr1[], int n)
{
    if(n==1) return; //base case
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr1[j] > arr1[j + 1])
                swap(arr1[j], arr1[j + 1]);
        }
        // cout << "runs" << endl;
    }
    bubbleSortRecc(arr1, n-1);
}

void bubbleSortOptimized(int arr1[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr1[j] > arr1[j + 1])
            {
                swap(arr1[j], arr1[j + 1]);
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
        cout << "runs" << endl;
    }
}

// TIME COMPLEXITY = O(N) -> best



int main()
{
    int n = 1;
    int arr1[] = {3};
    // int arr[] = {6,8,1,2,4};
    // bubbleSort(arr, n);
    // int arr1[] = {1,2,3,4,5};
    // bubbleSortOptimized(arr1, n);
    // bubbleSort(arr,n);
    bubbleSortRecc(arr1, n);
	for(int i=0; i<n; i++)
	{
		cout<< arr1[i]<<' ';
	}
	return 0;
}
