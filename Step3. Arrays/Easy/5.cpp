// https://www.codingninjas.com/studio/problems/left-rotate-an-array-by-one_5026278

#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    if(n<=1)
    {
        return arr;
    }
    int temp = arr[0]; //saving the element at index 0

    for(int i =1; i<n; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;//last index
    return arr;
} 
