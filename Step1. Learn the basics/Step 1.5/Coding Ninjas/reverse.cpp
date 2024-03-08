void reverse(vector<int>& arr, int start, int end)
{
    if (end > start)
    {
        swap(arr[start], arr[end]);
        reverse(arr, start + 1, end - 1);
    }
}

vector<int> reverseArray(int n, vector<int> &arr)
{
    int start =0;
    int end = arr.size()-1;
    reverse(arr, start, end);
    return arr;
}
