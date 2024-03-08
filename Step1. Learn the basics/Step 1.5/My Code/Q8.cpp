// reverse array

#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end)
{
    if (end > start)
    {
        swap(arr[start], arr[end]);
        reverse(arr, start + 1, end - 1);
    }
}

int main()
{
    int arr[5] = {1, 2, 4, 5, 6};
    reverse(arr, 0, 4);
    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}